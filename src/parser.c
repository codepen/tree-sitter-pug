#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_extends = 1,
  anon_sym_ = 2,
  anon_sym_include = 3,
  anon_sym_link = 4,
  anon_sym_script = 5,
  anon_sym_style = 6,
  aux_sym_path_token1 = 7,
  anon_sym_SLASH = 8,
  anon_sym_DOT = 9,
  anon_sym_LPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_RPAREN = 12,
  anon_sym_EQ = 13,
  sym_attribute_name = 14,
  sym_attribute_value = 15,
  anon_sym_SQUOTE = 16,
  aux_sym_quoted_attribute_value_token1 = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_quoted_attribute_value_token2 = 19,
  aux_sym_tbd_token1 = 20,
  sym_source_file = 21,
  sym_extends_statement = 22,
  sym_include_statement = 23,
  sym_link_tag = 24,
  sym_script_tag = 25,
  sym_style_tag = 26,
  sym_path = 27,
  sym__attributes = 28,
  sym_attribute = 29,
  sym_quoted_attribute_value = 30,
  sym_tbd = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_path_repeat1 = 33,
  aux_sym_path_repeat2 = 34,
  aux_sym__attributes_repeat1 = 35,
  aux_sym_tbd_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_extends] = "extends",
  [anon_sym_] = " ",
  [anon_sym_include] = "include",
  [anon_sym_link] = "link",
  [anon_sym_script] = "script",
  [anon_sym_style] = "style",
  [aux_sym_path_token1] = "path_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [aux_sym_tbd_token1] = "tbd_token1",
  [sym_source_file] = "source_file",
  [sym_extends_statement] = "extends_statement",
  [sym_include_statement] = "include_statement",
  [sym_link_tag] = "link_tag",
  [sym_script_tag] = "script_tag",
  [sym_style_tag] = "style_tag",
  [sym_path] = "path",
  [sym__attributes] = "_attributes",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_tbd] = "tbd",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_path_repeat2] = "path_repeat2",
  [aux_sym__attributes_repeat1] = "_attributes_repeat1",
  [aux_sym_tbd_repeat1] = "tbd_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_] = anon_sym_,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_style] = anon_sym_style,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [aux_sym_tbd_token1] = aux_sym_tbd_token1,
  [sym_source_file] = sym_source_file,
  [sym_extends_statement] = sym_extends_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_link_tag] = sym_link_tag,
  [sym_script_tag] = sym_script_tag,
  [sym_style_tag] = sym_style_tag,
  [sym_path] = sym_path,
  [sym__attributes] = sym__attributes,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_tbd] = sym_tbd,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_path_repeat2] = aux_sym_path_repeat2,
  [aux_sym__attributes_repeat1] = aux_sym__attributes_repeat1,
  [aux_sym_tbd_repeat1] = aux_sym_tbd_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_tbd_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_extends_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_link_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym__attributes] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_tbd] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tbd_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'k') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 26:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') SKIP(26)
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') SKIP(27)
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym_extends_statement] = STATE(2),
    [sym_include_statement] = STATE(2),
    [sym_link_tag] = STATE(2),
    [sym_script_tag] = STATE(2),
    [sym_style_tag] = STATE(2),
    [sym_tbd] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_tbd_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_extends] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_link] = ACTIONS(9),
    [anon_sym_script] = ACTIONS(11),
    [anon_sym_style] = ACTIONS(13),
    [aux_sym_tbd_token1] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_extends,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      anon_sym_link,
    ACTIONS(11), 1,
      anon_sym_script,
    ACTIONS(13), 1,
      anon_sym_style,
    ACTIONS(15), 1,
      aux_sym_tbd_token1,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_tbd_repeat1,
    STATE(3), 7,
      sym_extends_statement,
      sym_include_statement,
      sym_link_tag,
      sym_script_tag,
      sym_style_tag,
      sym_tbd,
      aux_sym_source_file_repeat1,
  [34] = 9,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_extends,
    ACTIONS(24), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_link,
    ACTIONS(30), 1,
      anon_sym_script,
    ACTIONS(33), 1,
      anon_sym_style,
    ACTIONS(36), 1,
      aux_sym_tbd_token1,
    STATE(9), 1,
      aux_sym_tbd_repeat1,
    STATE(3), 7,
      sym_extends_statement,
      sym_include_statement,
      sym_link_tag,
      sym_script_tag,
      sym_style_tag,
      sym_tbd,
      aux_sym_source_file_repeat1,
  [68] = 4,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      aux_sym_path_token1,
    STATE(4), 1,
      aux_sym_path_repeat2,
    ACTIONS(41), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
      aux_sym_tbd_token1,
  [86] = 4,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      aux_sym_path_token1,
    STATE(4), 1,
      aux_sym_path_repeat2,
    ACTIONS(48), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
      aux_sym_tbd_token1,
  [104] = 4,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym__attributes,
    ACTIONS(54), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
      aux_sym_tbd_token1,
  [122] = 4,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym__attributes,
    ACTIONS(60), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
      aux_sym_tbd_token1,
  [140] = 4,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym__attributes,
    ACTIONS(64), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
      aux_sym_tbd_token1,
  [158] = 4,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      aux_sym_tbd_token1,
    STATE(10), 1,
      aux_sym_tbd_repeat1,
    ACTIONS(68), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
  [175] = 4,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      aux_sym_tbd_token1,
    STATE(10), 1,
      aux_sym_tbd_repeat1,
    ACTIONS(74), 5,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
  [192] = 2,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
      aux_sym_tbd_token1,
  [204] = 2,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
      aux_sym_tbd_token1,
  [216] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
      aux_sym_tbd_token1,
  [228] = 2,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
      aux_sym_tbd_token1,
  [240] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
      aux_sym_tbd_token1,
  [252] = 2,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
      aux_sym_tbd_token1,
  [264] = 2,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 6,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_link,
      anon_sym_script,
      anon_sym_style,
      aux_sym_tbd_token1,
  [276] = 3,
    ACTIONS(107), 1,
      anon_sym_,
    ACTIONS(111), 1,
      anon_sym_EQ,
    ACTIONS(109), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_attribute_name,
  [288] = 3,
    STATE(17), 1,
      sym_path,
    STATE(20), 1,
      aux_sym_path_repeat1,
    ACTIONS(113), 2,
      aux_sym_path_token1,
      anon_sym_SLASH,
  [299] = 3,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_path_repeat1,
    ACTIONS(115), 2,
      aux_sym_path_token1,
      anon_sym_SLASH,
  [310] = 4,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(121), 1,
      sym_attribute_name,
    STATE(22), 1,
      sym_attribute,
    STATE(23), 1,
      aux_sym__attributes_repeat1,
  [323] = 3,
    ACTIONS(123), 1,
      anon_sym_,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [334] = 4,
    ACTIONS(121), 1,
      sym_attribute_name,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_attribute,
    STATE(27), 1,
      aux_sym__attributes_repeat1,
  [347] = 3,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_path_repeat1,
    ACTIONS(131), 2,
      aux_sym_path_token1,
      anon_sym_SLASH,
  [358] = 4,
    ACTIONS(136), 1,
      sym_attribute_value,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym_quoted_attribute_value,
  [371] = 3,
    STATE(11), 1,
      sym_path,
    STATE(20), 1,
      aux_sym_path_repeat1,
    ACTIONS(113), 2,
      aux_sym_path_token1,
      anon_sym_SLASH,
  [382] = 4,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(144), 1,
      sym_attribute_name,
    STATE(22), 1,
      sym_attribute,
    STATE(27), 1,
      aux_sym__attributes_repeat1,
  [395] = 2,
    ACTIONS(147), 1,
      anon_sym_,
    ACTIONS(149), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_attribute_name,
  [404] = 2,
    ACTIONS(151), 1,
      anon_sym_,
    ACTIONS(153), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_attribute_name,
  [413] = 2,
    ACTIONS(155), 1,
      anon_sym_,
    ACTIONS(157), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_attribute_name,
  [422] = 2,
    ACTIONS(159), 1,
      aux_sym_path_token1,
    STATE(5), 1,
      aux_sym_path_repeat2,
  [429] = 1,
    ACTIONS(142), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [434] = 2,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      aux_sym_quoted_attribute_value_token1,
  [441] = 2,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      aux_sym_quoted_attribute_value_token2,
  [448] = 1,
    ACTIONS(167), 1,
      anon_sym_,
  [452] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [456] = 1,
    ACTIONS(171), 1,
      anon_sym_,
  [460] = 1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
  [464] = 1,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 86,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 175,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 228,
  [SMALL_STATE(15)] = 240,
  [SMALL_STATE(16)] = 252,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 276,
  [SMALL_STATE(19)] = 288,
  [SMALL_STATE(20)] = 299,
  [SMALL_STATE(21)] = 310,
  [SMALL_STATE(22)] = 323,
  [SMALL_STATE(23)] = 334,
  [SMALL_STATE(24)] = 347,
  [SMALL_STATE(25)] = 358,
  [SMALL_STATE(26)] = 371,
  [SMALL_STATE(27)] = 382,
  [SMALL_STATE(28)] = 395,
  [SMALL_STATE(29)] = 404,
  [SMALL_STATE(30)] = 413,
  [SMALL_STATE(31)] = 422,
  [SMALL_STATE(32)] = 429,
  [SMALL_STATE(33)] = 434,
  [SMALL_STATE(34)] = 441,
  [SMALL_STATE(35)] = 448,
  [SMALL_STATE(36)] = 452,
  [SMALL_STATE(37)] = 456,
  [SMALL_STATE(38)] = 460,
  [SMALL_STATE(39)] = 464,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat2, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat2, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_tag, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_tag, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_tag, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_tag, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_tag, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_tag, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tbd, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tbd, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tbd_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tbd_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tbd_repeat1, 2), SHIFT_REPEAT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attributes, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attributes, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attributes, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attributes, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_tag, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_tag, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_tag, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_tag, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_tag, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_tag, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends_statement, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends_statement, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attributes_repeat1, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(24),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attributes_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(18),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pug(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
