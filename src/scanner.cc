#include <tree_sitter/parser.h>
#include <string>
#include <vector>
#include <cwctype>
#include "tag.h"

namespace {

using std::vector;
using std::string;

enum TokenType {
  TAG_NAME,
  SCRIPT_TAG_NAME,
  IMPLICIT_END_TAG,
};

struct Scanner {
  Scanner() {}

  unsigned serialize(char *buffer) {
    uint16_t tag_count = tags.size() > UINT16_MAX ? UINT16_MAX : tags.size();
    uint16_t serialized_tag_count = 0;

    unsigned i = sizeof(tag_count);
    std::memcpy(&buffer[i], &tag_count, sizeof(tag_count));
    i += sizeof(tag_count);

    for (; serialized_tag_count < tag_count; serialized_tag_count++) {
      Tag &tag = tags[serialized_tag_count];
      if (tag.type == CUSTOM) {
        unsigned name_length = tag.custom_tag_name.size();
        if (name_length > UINT8_MAX) name_length = UINT8_MAX;
        if (i + 2 + name_length >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) break;
        buffer[i++] = static_cast<char>(tag.type);
        buffer[i++] = name_length;
        tag.custom_tag_name.copy(&buffer[i], name_length);
        i += name_length;
      } else {
        if (i + 1 >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) break;
        buffer[i++] = static_cast<char>(tag.type);
      }
    }

    std::memcpy(&buffer[0], &serialized_tag_count, sizeof(serialized_tag_count));
    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    tags.clear();
    if (length > 0) {
      unsigned i = 0;
      uint16_t tag_count, serialized_tag_count;

      std::memcpy(&serialized_tag_count, &buffer[i], sizeof(serialized_tag_count));
      i += sizeof(serialized_tag_count);

      std::memcpy(&tag_count, &buffer[i], sizeof(tag_count));
      i += sizeof(tag_count);

      tags.resize(tag_count);
      for (unsigned j = 0; j < serialized_tag_count; j++) {
        Tag &tag = tags[j];
        tag.type = static_cast<TagType>(buffer[i++]);
        if (tag.type == CUSTOM) {
          uint16_t name_length = static_cast<uint8_t>(buffer[i++]);
          tag.custom_tag_name.assign(&buffer[i], &buffer[i + name_length]);
          i += name_length;
        }
      }
    }
  }

  string scan_tag(TSLexer *lexer) {
    string tag_name;
    while (iswalnum(lexer->lookahead) || lexer->lookahead == '-' || lexer->lookahead == ':') {
      tag_name += towupper(lexer->lookahead);
      lexer->advance(lexer, false);
    }
    return tag_name;
  }

  bool scan_implicit_end_tag(TSLexer *lexer) {
    Tag *parent = tags.empty() ? NULL : &tags.back();

      if (parent && parent->is_void()) {
        tags.pop_back();
        lexer->result_symbol = IMPLICIT_END_TAG;
        return true;
      }

    string tag_name = scan_tag(lexer);
    if (tag_name.empty()) return false;

    Tag next_tag = Tag::for_name(tag_name);

    if (parent) {
      tags.pop_back();
      lexer->result_symbol = IMPLICIT_END_TAG;
      return true;
    }

    return false;
  }

  bool scan_tag_name(TSLexer *lexer) {
    string tag_name = scan_tag(lexer);
    if (tag_name.empty()) return false;
    Tag tag = Tag::for_name(tag_name);
    tags.push_back(tag);
    switch (tag.type) {
      case SCRIPT:
        lexer->result_symbol = SCRIPT_TAG_NAME;
        break;
      default:
        lexer->result_symbol = TAG_NAME;
        break;
    }
    return true;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }

    switch (lexer->lookahead) {
      case '\0':
        if (valid_symbols[IMPLICIT_END_TAG]) {
          return scan_implicit_end_tag(lexer);
        }
        break;

      default:
        return scan_tag_name(lexer);
    }

    return false;
  }

  vector<Tag> tags;
};

} // namespace

extern "C" {

void *tree_sitter_pug_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_html_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_html_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_html_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_pug_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
