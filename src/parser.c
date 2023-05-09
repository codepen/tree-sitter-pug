#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_script = 1,
  anon_sym_include = 2,
  anon_sym_ = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_EQ = 7,
  sym_tag_name = 8,
  sym_attribute_name = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_quoted_attribute_value_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_quoted_attribute_value_token2 = 13,
  aux_sym_path_token1 = 14,
  anon_sym_SLASH = 15,
  anon_sym_DOT = 16,
  sym_fragment = 17,
  sym_tag = 18,
  sym_script_tag = 19,
  sym_include_statement = 20,
  sym_attributes = 21,
  sym_attribute = 22,
  sym_quoted_attribute_value = 23,
  sym_path = 24,
  aux_sym_fragment_repeat1 = 25,
  aux_sym_attributes_repeat1 = 26,
  aux_sym_path_repeat1 = 27,
  aux_sym_path_repeat2 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_script] = "script",
  [anon_sym_include] = "include",
  [anon_sym_] = " ",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [sym_tag_name] = "tag_name",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [aux_sym_path_token1] = "path_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [sym_fragment] = "fragment",
  [sym_tag] = "tag",
  [sym_script_tag] = "script_tag",
  [sym_include_statement] = "include_statement",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_path] = "path",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_path_repeat2] = "path_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_] = anon_sym_,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = aux_sym_quoted_attribute_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = aux_sym_quoted_attribute_value_token1,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_fragment] = sym_fragment,
  [sym_tag] = sym_tag,
  [sym_script_tag] = sym_script_tag,
  [sym_include_statement] = sym_include_statement,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_path] = sym_path,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_path_repeat2] = aux_sym_path_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
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
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
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
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
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
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_script);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(35),
    [sym_tag] = STATE(3),
    [sym_script_tag] = STATE(3),
    [sym_include_statement] = STATE(3),
    [aux_sym_fragment_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_script] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [sym_tag_name] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_script,
    ACTIONS(16), 1,
      anon_sym_include,
    ACTIONS(19), 1,
      sym_tag_name,
    STATE(2), 4,
      sym_tag,
      sym_script_tag,
      sym_include_statement,
      aux_sym_fragment_repeat1,
  [19] = 5,
    ACTIONS(5), 1,
      anon_sym_script,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      sym_tag_name,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(2), 4,
      sym_tag,
      sym_script_tag,
      sym_include_statement,
      aux_sym_fragment_repeat1,
  [38] = 4,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_attributes,
    ACTIONS(26), 3,
      anon_sym_script,
      anon_sym_include,
      sym_tag_name,
  [53] = 4,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      aux_sym_path_token1,
    STATE(5), 1,
      aux_sym_path_repeat2,
    ACTIONS(32), 3,
      anon_sym_script,
      anon_sym_include,
      sym_tag_name,
  [68] = 4,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_attributes,
    ACTIONS(39), 3,
      anon_sym_script,
      anon_sym_include,
      sym_tag_name,
  [83] = 4,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_path_token1,
    STATE(5), 1,
      aux_sym_path_repeat2,
    ACTIONS(43), 3,
      anon_sym_script,
      anon_sym_include,
      sym_tag_name,
  [98] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 3,
      anon_sym_script,
      anon_sym_include,
      sym_tag_name,
  [107] = 2,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 3,
      anon_sym_script,
      anon_sym_include,
      sym_tag_name,
  [116] = 3,
    STATE(16), 1,
      sym_path,
    STATE(17), 1,
      aux_sym_path_repeat1,
    ACTIONS(55), 2,
      aux_sym_path_token1,
      anon_sym_SLASH,
  [127] = 3,
    ACTIONS(60), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_path_repeat1,
    ACTIONS(57), 2,
      aux_sym_path_token1,
      anon_sym_SLASH,
  [138] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 3,
      anon_sym_script,
      anon_sym_include,
      sym_tag_name,
  [147] = 3,
    ACTIONS(66), 1,
      anon_sym_,
    ACTIONS(70), 1,
      anon_sym_EQ,
    ACTIONS(68), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [158] = 2,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 3,
      anon_sym_script,
      anon_sym_include,
      sym_tag_name,
  [167] = 4,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    ACTIONS(78), 1,
      sym_attribute_name,
    STATE(20), 1,
      aux_sym_attributes_repeat1,
    STATE(22), 1,
      sym_attribute,
  [180] = 2,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 3,
      anon_sym_script,
      anon_sym_include,
      sym_tag_name,
  [189] = 3,
    ACTIONS(86), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym_path_repeat1,
    ACTIONS(84), 2,
      aux_sym_path_token1,
      anon_sym_SLASH,
  [200] = 4,
    ACTIONS(78), 1,
      sym_attribute_name,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      aux_sym_attributes_repeat1,
    STATE(24), 1,
      sym_attribute,
  [213] = 2,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 3,
      anon_sym_script,
      anon_sym_include,
      sym_tag_name,
  [222] = 4,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      sym_attribute_name,
    STATE(20), 1,
      aux_sym_attributes_repeat1,
    STATE(31), 1,
      sym_attribute,
  [235] = 3,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_quoted_attribute_value,
  [245] = 3,
    ACTIONS(103), 1,
      anon_sym_,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
  [255] = 2,
    ACTIONS(109), 1,
      anon_sym_,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [263] = 3,
    ACTIONS(103), 1,
      anon_sym_,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [273] = 2,
    ACTIONS(115), 1,
      anon_sym_,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [281] = 2,
    ACTIONS(119), 1,
      anon_sym_,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [289] = 1,
    ACTIONS(94), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [294] = 2,
    ACTIONS(123), 1,
      aux_sym_path_token1,
    STATE(7), 1,
      aux_sym_path_repeat2,
  [301] = 2,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      aux_sym_quoted_attribute_value_token1,
  [308] = 2,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      aux_sym_quoted_attribute_value_token2,
  [315] = 2,
    ACTIONS(103), 1,
      anon_sym_,
    ACTIONS(105), 1,
      anon_sym_COMMA,
  [322] = 1,
    ACTIONS(131), 1,
      anon_sym_,
  [326] = 1,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
  [330] = 1,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
  [334] = 1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 107,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 127,
  [SMALL_STATE(12)] = 138,
  [SMALL_STATE(13)] = 147,
  [SMALL_STATE(14)] = 158,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 180,
  [SMALL_STATE(17)] = 189,
  [SMALL_STATE(18)] = 200,
  [SMALL_STATE(19)] = 213,
  [SMALL_STATE(20)] = 222,
  [SMALL_STATE(21)] = 235,
  [SMALL_STATE(22)] = 245,
  [SMALL_STATE(23)] = 255,
  [SMALL_STATE(24)] = 263,
  [SMALL_STATE(25)] = 273,
  [SMALL_STATE(26)] = 281,
  [SMALL_STATE(27)] = 289,
  [SMALL_STATE(28)] = 294,
  [SMALL_STATE(29)] = 301,
  [SMALL_STATE(30)] = 308,
  [SMALL_STATE(31)] = 315,
  [SMALL_STATE(32)] = 322,
  [SMALL_STATE(33)] = 326,
  [SMALL_STATE(34)] = 330,
  [SMALL_STATE(35)] = 334,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(4),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(32),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(6),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_tag, 1),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_tag, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat2, 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat2, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_tag, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_tag, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(13),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
