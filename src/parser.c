#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
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
  sym_attribute_name = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_quoted_attribute_value_token1 = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_quoted_attribute_value_token2 = 12,
  aux_sym_path_token1 = 13,
  anon_sym_SLASH = 14,
  anon_sym_DOT = 15,
  aux_sym_tbd_token1 = 16,
  sym_fragment = 17,
  sym_script_tag = 18,
  sym_include_statement = 19,
  sym_attributes = 20,
  sym_attribute = 21,
  sym_quoted_attribute_value = 22,
  sym_path = 23,
  sym_tbd = 24,
  aux_sym_fragment_repeat1 = 25,
  aux_sym_attributes_repeat1 = 26,
  aux_sym_path_repeat1 = 27,
  aux_sym_path_repeat2 = 28,
  aux_sym_tbd_repeat1 = 29,
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
  [sym_attribute_name] = "attribute_name",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [aux_sym_path_token1] = "path_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [aux_sym_tbd_token1] = "tbd_token1",
  [sym_fragment] = "fragment",
  [sym_script_tag] = "script_tag",
  [sym_include_statement] = "include_statement",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_path] = "path",
  [sym_tbd] = "tbd",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_path_repeat2] = "path_repeat2",
  [aux_sym_tbd_repeat1] = "tbd_repeat1",
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
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = aux_sym_quoted_attribute_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = aux_sym_quoted_attribute_value_token1,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_tbd_token1] = aux_sym_tbd_token1,
  [sym_fragment] = sym_fragment,
  [sym_script_tag] = sym_script_tag,
  [sym_include_statement] = sym_include_statement,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_path] = sym_path,
  [sym_tbd] = sym_tbd,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_path_repeat2] = aux_sym_path_repeat2,
  [aux_sym_tbd_repeat1] = aux_sym_tbd_repeat1,
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
  [aux_sym_tbd_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_fragment] = {
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
  [sym_tbd] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(15)
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(16)
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_tbd_token1);
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 15},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(35),
    [sym_script_tag] = STATE(3),
    [sym_include_statement] = STATE(3),
    [sym_tbd] = STATE(3),
    [aux_sym_fragment_repeat1] = STATE(3),
    [aux_sym_tbd_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_script] = ACTIONS(5),
    [anon_sym_include] = ACTIONS(7),
    [aux_sym_tbd_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_script,
    ACTIONS(16), 1,
      anon_sym_include,
    ACTIONS(19), 1,
      aux_sym_tbd_token1,
    STATE(7), 1,
      aux_sym_tbd_repeat1,
    STATE(2), 4,
      sym_script_tag,
      sym_include_statement,
      sym_tbd,
      aux_sym_fragment_repeat1,
  [22] = 6,
    ACTIONS(5), 1,
      anon_sym_script,
    ACTIONS(7), 1,
      anon_sym_include,
    ACTIONS(9), 1,
      aux_sym_tbd_token1,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_tbd_repeat1,
    STATE(2), 4,
      sym_script_tag,
      sym_include_statement,
      sym_tbd,
      aux_sym_fragment_repeat1,
  [44] = 4,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      aux_sym_path_token1,
    STATE(4), 1,
      aux_sym_path_repeat2,
    ACTIONS(26), 3,
      anon_sym_script,
      anon_sym_include,
      aux_sym_tbd_token1,
  [59] = 4,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_path_token1,
    STATE(4), 1,
      aux_sym_path_repeat2,
    ACTIONS(33), 3,
      anon_sym_script,
      anon_sym_include,
      aux_sym_tbd_token1,
  [74] = 4,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_attributes,
    ACTIONS(39), 3,
      anon_sym_script,
      anon_sym_include,
      aux_sym_tbd_token1,
  [89] = 4,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_tbd_token1,
    STATE(8), 1,
      aux_sym_tbd_repeat1,
    ACTIONS(45), 2,
      anon_sym_script,
      anon_sym_include,
  [103] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_tbd_token1,
    STATE(8), 1,
      aux_sym_tbd_repeat1,
    ACTIONS(51), 2,
      anon_sym_script,
      anon_sym_include,
  [117] = 4,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    ACTIONS(58), 1,
      sym_attribute_name,
    STATE(16), 1,
      aux_sym_attributes_repeat1,
    STATE(24), 1,
      sym_attribute,
  [130] = 2,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 3,
      anon_sym_script,
      anon_sym_include,
      aux_sym_tbd_token1,
  [139] = 3,
    STATE(17), 1,
      sym_path,
    STATE(18), 1,
      aux_sym_path_repeat1,
    ACTIONS(64), 2,
      aux_sym_path_token1,
      anon_sym_SLASH,
  [150] = 3,
    ACTIONS(69), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_path_repeat1,
    ACTIONS(66), 2,
      aux_sym_path_token1,
      anon_sym_SLASH,
  [161] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 3,
      anon_sym_script,
      anon_sym_include,
      aux_sym_tbd_token1,
  [170] = 3,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(79), 1,
      anon_sym_EQ,
    ACTIONS(77), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [181] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 3,
      anon_sym_script,
      anon_sym_include,
      aux_sym_tbd_token1,
  [190] = 4,
    ACTIONS(58), 1,
      sym_attribute_name,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_attributes_repeat1,
    STATE(22), 1,
      sym_attribute,
  [203] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 3,
      anon_sym_script,
      anon_sym_include,
      aux_sym_tbd_token1,
  [212] = 3,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym_path_repeat1,
    ACTIONS(91), 2,
      aux_sym_path_token1,
      anon_sym_SLASH,
  [223] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 3,
      anon_sym_script,
      anon_sym_include,
      aux_sym_tbd_token1,
  [232] = 4,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      sym_attribute_name,
    STATE(20), 1,
      aux_sym_attributes_repeat1,
    STATE(31), 1,
      sym_attribute,
  [245] = 3,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_quoted_attribute_value,
  [255] = 3,
    ACTIONS(108), 1,
      anon_sym_,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
  [265] = 2,
    ACTIONS(114), 1,
      anon_sym_,
    ACTIONS(116), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [273] = 3,
    ACTIONS(108), 1,
      anon_sym_,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
  [283] = 2,
    ACTIONS(120), 1,
      anon_sym_,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [291] = 2,
    ACTIONS(124), 1,
      anon_sym_,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [299] = 1,
    ACTIONS(99), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [304] = 2,
    ACTIONS(128), 1,
      aux_sym_path_token1,
    STATE(5), 1,
      aux_sym_path_repeat2,
  [311] = 2,
    ACTIONS(130), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      aux_sym_quoted_attribute_value_token1,
  [318] = 2,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      aux_sym_quoted_attribute_value_token2,
  [325] = 2,
    ACTIONS(108), 1,
      anon_sym_,
    ACTIONS(110), 1,
      anon_sym_COMMA,
  [332] = 1,
    ACTIONS(136), 1,
      anon_sym_,
  [336] = 1,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
  [340] = 1,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
  [344] = 1,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 103,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 130,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 150,
  [SMALL_STATE(13)] = 161,
  [SMALL_STATE(14)] = 170,
  [SMALL_STATE(15)] = 181,
  [SMALL_STATE(16)] = 190,
  [SMALL_STATE(17)] = 203,
  [SMALL_STATE(18)] = 212,
  [SMALL_STATE(19)] = 223,
  [SMALL_STATE(20)] = 232,
  [SMALL_STATE(21)] = 245,
  [SMALL_STATE(22)] = 255,
  [SMALL_STATE(23)] = 265,
  [SMALL_STATE(24)] = 273,
  [SMALL_STATE(25)] = 283,
  [SMALL_STATE(26)] = 291,
  [SMALL_STATE(27)] = 299,
  [SMALL_STATE(28)] = 304,
  [SMALL_STATE(29)] = 311,
  [SMALL_STATE(30)] = 318,
  [SMALL_STATE(31)] = 325,
  [SMALL_STATE(32)] = 332,
  [SMALL_STATE(33)] = 336,
  [SMALL_STATE(34)] = 340,
  [SMALL_STATE(35)] = 344,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(6),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(32),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(7),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat2, 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat2, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_tag, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_tag, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tbd, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tbd, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tbd_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tbd_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tbd_repeat1, 2), SHIFT_REPEAT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_tag, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_tag, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(12),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(14),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [140] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
