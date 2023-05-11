#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 162
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_doctype = 1,
  anon_sym_html = 2,
  anon_sym_strict = 3,
  anon_sym_xml = 4,
  anon_sym_SLASH_SLASH = 5,
  sym__comment_content = 6,
  anon_sym_script = 7,
  anon_sym_COLON = 8,
  anon_sym_ = 9,
  anon_sym_style = 10,
  sym_tag_name = 11,
  sym_class = 12,
  sym_id = 13,
  anon_sym_DOT = 14,
  sym_javascript = 15,
  sym_content = 16,
  anon_sym_LBRACE_LBRACE = 17,
  anon_sym_RBRACE_RBRACE = 18,
  anon_sym_PIPE = 19,
  aux_sym_path_token1 = 20,
  anon_sym_SLASH = 21,
  anon_sym_LPAREN = 22,
  anon_sym_COMMA = 23,
  anon_sym_RPAREN = 24,
  anon_sym_EQ = 25,
  sym_attribute_name = 26,
  sym_attribute_value = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_quoted_attribute_value_token1 = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_quoted_attribute_value_token2 = 31,
  sym__newline = 32,
  sym__indent = 33,
  sym__dedent = 34,
  sym__script_tag_name = 35,
  sym__style_tag_name = 36,
  sym_raw_text = 37,
  sym_source_file = 38,
  sym_doctype = 39,
  sym_comment = 40,
  sym_script_tag = 41,
  sym_style_tag = 42,
  sym_tag = 43,
  sym__content_after_dot = 44,
  aux_sym__content_or_javascript = 45,
  sym_children = 46,
  sym_pipe_content = 47,
  sym__children_choice = 48,
  sym__attributes = 49,
  sym_attribute = 50,
  sym_quoted_attribute_value = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_comment_repeat1 = 53,
  aux_sym_script_tag_repeat1 = 54,
  aux_sym__content_after_dot_repeat1 = 55,
  aux_sym_children_repeat1 = 56,
  aux_sym__attributes_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_doctype] = "doctype",
  [anon_sym_html] = "doctype_name",
  [anon_sym_strict] = "doctype_name",
  [anon_sym_xml] = "doctype_name",
  [anon_sym_SLASH_SLASH] = "//",
  [sym__comment_content] = "_comment_content",
  [anon_sym_script] = "script",
  [anon_sym_COLON] = ":",
  [anon_sym_] = " ",
  [anon_sym_style] = "style",
  [sym_tag_name] = "tag_name",
  [sym_class] = "class",
  [sym_id] = "id",
  [anon_sym_DOT] = ".",
  [sym_javascript] = "javascript",
  [sym_content] = "content",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_PIPE] = "|",
  [aux_sym_path_token1] = "path_token1",
  [anon_sym_SLASH] = "/",
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
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__script_tag_name] = "_script_tag_name",
  [sym__style_tag_name] = "_style_tag_name",
  [sym_raw_text] = "raw_text",
  [sym_source_file] = "source_file",
  [sym_doctype] = "doctype",
  [sym_comment] = "comment",
  [sym_script_tag] = "script_tag",
  [sym_style_tag] = "style_tag",
  [sym_tag] = "tag",
  [sym__content_after_dot] = "_content_after_dot",
  [aux_sym__content_or_javascript] = "_content_or_javascript",
  [sym_children] = "children",
  [sym_pipe_content] = "pipe_content",
  [sym__children_choice] = "_children_choice",
  [sym__attributes] = "_attributes",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_script_tag_repeat1] = "script_tag_repeat1",
  [aux_sym__content_after_dot_repeat1] = "_content_after_dot_repeat1",
  [aux_sym_children_repeat1] = "children_repeat1",
  [aux_sym__attributes_repeat1] = "_attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_strict] = anon_sym_html,
  [anon_sym_xml] = anon_sym_html,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym__comment_content] = sym__comment_content,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_] = anon_sym_,
  [anon_sym_style] = anon_sym_style,
  [sym_tag_name] = sym_tag_name,
  [sym_class] = sym_class,
  [sym_id] = sym_id,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_javascript] = sym_javascript,
  [sym_content] = sym_content,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__script_tag_name] = sym__script_tag_name,
  [sym__style_tag_name] = sym__style_tag_name,
  [sym_raw_text] = sym_raw_text,
  [sym_source_file] = sym_source_file,
  [sym_doctype] = sym_doctype,
  [sym_comment] = sym_comment,
  [sym_script_tag] = sym_script_tag,
  [sym_style_tag] = sym_style_tag,
  [sym_tag] = sym_tag,
  [sym__content_after_dot] = sym__content_after_dot,
  [aux_sym__content_or_javascript] = aux_sym__content_or_javascript,
  [sym_children] = sym_children,
  [sym_pipe_content] = sym_pipe_content,
  [sym__children_choice] = sym__children_choice,
  [sym__attributes] = sym__attributes,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_script_tag_repeat1] = aux_sym_script_tag_repeat1,
  [aux_sym__content_after_dot_repeat1] = aux_sym__content_after_dot_repeat1,
  [aux_sym_children_repeat1] = aux_sym_children_repeat1,
  [aux_sym__attributes_repeat1] = aux_sym__attributes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_html] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_strict] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__comment_content] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_javascript] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__script_tag_name] = {
    .visible = false,
    .named = true,
  },
  [sym__style_tag_name] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__content_after_dot] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__content_or_javascript] = {
    .visible = false,
    .named = false,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_content] = {
    .visible = true,
    .named = true,
  },
  [sym__children_choice] = {
    .visible = false,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__content_after_dot_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_children_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [3] = sym_children,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__content_after_dot_repeat1, 2,
    aux_sym__content_after_dot_repeat1,
    sym_children,
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
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 10,
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
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 18,
  [60] = 26,
  [61] = 9,
  [62] = 15,
  [63] = 21,
  [64] = 64,
  [65] = 51,
  [66] = 66,
  [67] = 34,
  [68] = 45,
  [69] = 69,
  [70] = 70,
  [71] = 47,
  [72] = 58,
  [73] = 37,
  [74] = 49,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 56,
  [81] = 81,
  [82] = 77,
  [83] = 81,
  [84] = 84,
  [85] = 79,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 90,
  [93] = 89,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 96,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 91,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 97,
  [120] = 94,
  [121] = 121,
  [122] = 88,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 132,
  [135] = 135,
  [136] = 136,
  [137] = 136,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 131,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 152,
  [161] = 158,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(76);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(23);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_script);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_style);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(83);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 29},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 29, .external_lex_state = 2},
  [5] = {.lex_state = 29, .external_lex_state = 2},
  [6] = {.lex_state = 3, .external_lex_state = 3},
  [7] = {.lex_state = 3, .external_lex_state = 3},
  [8] = {.lex_state = 3, .external_lex_state = 3},
  [9] = {.lex_state = 29, .external_lex_state = 2},
  [10] = {.lex_state = 3, .external_lex_state = 3},
  [11] = {.lex_state = 29, .external_lex_state = 2},
  [12] = {.lex_state = 29, .external_lex_state = 2},
  [13] = {.lex_state = 29, .external_lex_state = 2},
  [14] = {.lex_state = 29, .external_lex_state = 2},
  [15] = {.lex_state = 29, .external_lex_state = 2},
  [16] = {.lex_state = 3, .external_lex_state = 3},
  [17] = {.lex_state = 3, .external_lex_state = 3},
  [18] = {.lex_state = 29, .external_lex_state = 2},
  [19] = {.lex_state = 3, .external_lex_state = 3},
  [20] = {.lex_state = 29, .external_lex_state = 2},
  [21] = {.lex_state = 29, .external_lex_state = 2},
  [22] = {.lex_state = 29, .external_lex_state = 2},
  [23] = {.lex_state = 29, .external_lex_state = 2},
  [24] = {.lex_state = 29, .external_lex_state = 2},
  [25] = {.lex_state = 3, .external_lex_state = 3},
  [26] = {.lex_state = 29, .external_lex_state = 2},
  [27] = {.lex_state = 29, .external_lex_state = 2},
  [28] = {.lex_state = 9, .external_lex_state = 4},
  [29] = {.lex_state = 9, .external_lex_state = 4},
  [30] = {.lex_state = 9, .external_lex_state = 4},
  [31] = {.lex_state = 29, .external_lex_state = 2},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 29},
  [52] = {.lex_state = 3, .external_lex_state = 3},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 29},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 29},
  [57] = {.lex_state = 29},
  [58] = {.lex_state = 29},
  [59] = {.lex_state = 9, .external_lex_state = 5},
  [60] = {.lex_state = 9, .external_lex_state = 5},
  [61] = {.lex_state = 9, .external_lex_state = 5},
  [62] = {.lex_state = 9, .external_lex_state = 5},
  [63] = {.lex_state = 9, .external_lex_state = 5},
  [64] = {.lex_state = 9, .external_lex_state = 4},
  [65] = {.lex_state = 9, .external_lex_state = 4},
  [66] = {.lex_state = 5, .external_lex_state = 3},
  [67] = {.lex_state = 9, .external_lex_state = 4},
  [68] = {.lex_state = 9, .external_lex_state = 4},
  [69] = {.lex_state = 5, .external_lex_state = 3},
  [70] = {.lex_state = 1, .external_lex_state = 4},
  [71] = {.lex_state = 9, .external_lex_state = 4},
  [72] = {.lex_state = 9, .external_lex_state = 4},
  [73] = {.lex_state = 9, .external_lex_state = 4},
  [74] = {.lex_state = 9, .external_lex_state = 4},
  [75] = {.lex_state = 5, .external_lex_state = 3},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 5, .external_lex_state = 3},
  [78] = {.lex_state = 5, .external_lex_state = 3},
  [79] = {.lex_state = 1, .external_lex_state = 4},
  [80] = {.lex_state = 9, .external_lex_state = 4},
  [81] = {.lex_state = 5, .external_lex_state = 3},
  [82] = {.lex_state = 5, .external_lex_state = 3},
  [83] = {.lex_state = 5, .external_lex_state = 3},
  [84] = {.lex_state = 9, .external_lex_state = 4},
  [85] = {.lex_state = 1, .external_lex_state = 4},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1, .external_lex_state = 3},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 1, .external_lex_state = 3},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 1, .external_lex_state = 3},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 1, .external_lex_state = 3},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 1, .external_lex_state = 3},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 1, .external_lex_state = 3},
  [100] = {.lex_state = 1, .external_lex_state = 3},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 1, .external_lex_state = 3},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 5, .external_lex_state = 3},
  [105] = {.lex_state = 1, .external_lex_state = 3},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 1, .external_lex_state = 3},
  [109] = {.lex_state = 1, .external_lex_state = 3},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 1, .external_lex_state = 3},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 5, .external_lex_state = 3},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 1, .external_lex_state = 3},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 1, .external_lex_state = 3},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 1, .external_lex_state = 3},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 1, .external_lex_state = 3},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 6, .external_lex_state = 4},
  [127] = {.lex_state = 6, .external_lex_state = 4},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 6, .external_lex_state = 4},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1, .external_lex_state = 4},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 6, .external_lex_state = 4},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 6, .external_lex_state = 4},
  [145] = {.lex_state = 1, .external_lex_state = 3},
  [146] = {.lex_state = 6, .external_lex_state = 3},
  [147] = {.lex_state = 6, .external_lex_state = 4},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0, .external_lex_state = 3},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 3},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__script_tag_name = 3,
  ts_external_token__style_tag_name = 4,
  ts_external_token_raw_text = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__script_tag_name] = sym__script_tag_name,
  [ts_external_token__style_tag_name] = sym__style_tag_name,
  [ts_external_token_raw_text] = sym_raw_text,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__script_tag_name] = true,
    [ts_external_token__style_tag_name] = true,
    [ts_external_token_raw_text] = true,
  },
  [2] = {
    [ts_external_token__indent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_class] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__script_tag_name] = ACTIONS(1),
    [sym__style_tag_name] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(151),
    [sym_doctype] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_script_tag] = STATE(2),
    [sym_style_tag] = STATE(2),
    [sym_tag] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_script] = ACTIONS(9),
    [anon_sym_style] = ACTIONS(11),
    [sym_tag_name] = ACTIONS(13),
    [sym_class] = ACTIONS(15),
    [sym_id] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_script,
    ACTIONS(11), 1,
      anon_sym_style,
    ACTIONS(13), 1,
      sym_tag_name,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 2,
      sym_class,
      sym_id,
    STATE(3), 6,
      sym_doctype,
      sym_comment,
      sym_script_tag,
      sym_style_tag,
      sym_tag,
      aux_sym_source_file_repeat1,
  [31] = 8,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_doctype,
    ACTIONS(24), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_script,
    ACTIONS(30), 1,
      anon_sym_style,
    ACTIONS(33), 1,
      sym_tag_name,
    ACTIONS(36), 2,
      sym_class,
      sym_id,
    STATE(3), 6,
      sym_doctype,
      sym_comment,
      sym_script_tag,
      sym_style_tag,
      sym_tag,
      aux_sym_source_file_repeat1,
  [62] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(50), 1,
      sym_children,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(41), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [81] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(32), 1,
      sym_children,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(47), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [100] = 9,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      anon_sym_,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym__newline,
    STATE(25), 1,
      aux_sym_script_tag_repeat1,
    STATE(38), 1,
      sym__content_after_dot,
    STATE(75), 1,
      sym__attributes,
    ACTIONS(53), 2,
      sym_class,
      sym_id,
  [129] = 9,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(63), 1,
      anon_sym_,
    ACTIONS(67), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym_script_tag_repeat1,
    STATE(37), 1,
      sym__content_after_dot,
    STATE(83), 1,
      sym__attributes,
    ACTIONS(65), 2,
      sym_class,
      sym_id,
  [158] = 9,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_COLON,
    ACTIONS(71), 1,
      anon_sym_,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym_script_tag_repeat1,
    STATE(73), 1,
      sym__content_after_dot,
    STATE(81), 1,
      sym__attributes,
    ACTIONS(73), 2,
      sym_class,
      sym_id,
  [187] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(56), 1,
      sym_children,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(81), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [206] = 9,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_COLON,
    ACTIONS(85), 1,
      anon_sym_,
    ACTIONS(89), 1,
      sym__newline,
    STATE(52), 1,
      aux_sym_script_tag_repeat1,
    STATE(58), 1,
      sym__content_after_dot,
    STATE(77), 1,
      sym__attributes,
    ACTIONS(87), 2,
      sym_class,
      sym_id,
  [235] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(55), 1,
      sym_children,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(93), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [254] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(41), 1,
      sym_children,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(97), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [273] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(54), 1,
      sym_children,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(101), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [292] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(42), 1,
      sym_children,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(105), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [311] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(51), 1,
      sym_children,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(109), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [330] = 9,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      anon_sym_,
    ACTIONS(115), 1,
      sym__newline,
    STATE(52), 1,
      aux_sym_script_tag_repeat1,
    STATE(72), 1,
      sym__content_after_dot,
    STATE(82), 1,
      sym__attributes,
    ACTIONS(87), 2,
      sym_class,
      sym_id,
  [359] = 9,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_COLON,
    ACTIONS(119), 1,
      anon_sym_,
    ACTIONS(123), 1,
      sym__newline,
    STATE(19), 1,
      aux_sym_script_tag_repeat1,
    STATE(33), 1,
      sym__content_after_dot,
    STATE(78), 1,
      sym__attributes,
    ACTIONS(121), 2,
      sym_class,
      sym_id,
  [388] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(34), 1,
      sym_children,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(127), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [407] = 9,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_COLON,
    ACTIONS(131), 1,
      anon_sym_,
    ACTIONS(133), 1,
      sym__newline,
    STATE(41), 1,
      sym__content_after_dot,
    STATE(52), 1,
      aux_sym_script_tag_repeat1,
    STATE(69), 1,
      sym__attributes,
    ACTIONS(87), 2,
      sym_class,
      sym_id,
  [436] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(53), 1,
      sym_children,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(137), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [455] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(47), 1,
      sym_children,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(141), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [474] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(44), 1,
      sym_children,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(145), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [493] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(46), 1,
      sym_children,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(149), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [512] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(39), 1,
      sym_children,
    ACTIONS(151), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(153), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [531] = 9,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(157), 1,
      anon_sym_,
    ACTIONS(159), 1,
      sym__newline,
    STATE(52), 1,
      aux_sym_script_tag_repeat1,
    STATE(53), 1,
      sym__content_after_dot,
    STATE(66), 1,
      sym__attributes,
    ACTIONS(87), 2,
      sym_class,
      sym_id,
  [560] = 4,
    ACTIONS(43), 1,
      sym__indent,
    STATE(58), 1,
      sym_children,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(163), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [579] = 3,
    ACTIONS(169), 1,
      sym__indent,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(167), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [595] = 4,
    ACTIONS(174), 1,
      anon_sym_PIPE,
    ACTIONS(177), 1,
      sym__dedent,
    ACTIONS(171), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(28), 4,
      sym_tag,
      sym_pipe_content,
      sym__children_choice,
      aux_sym_children_repeat1,
  [613] = 4,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    ACTIONS(183), 1,
      sym__dedent,
    ACTIONS(179), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(28), 4,
      sym_tag,
      sym_pipe_content,
      sym__children_choice,
      aux_sym_children_repeat1,
  [631] = 4,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    ACTIONS(185), 1,
      sym__dedent,
    ACTIONS(179), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(28), 4,
      sym_tag,
      sym_pipe_content,
      sym__children_choice,
      aux_sym_children_repeat1,
  [649] = 3,
    ACTIONS(191), 1,
      sym__indent,
    ACTIONS(187), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(189), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [665] = 2,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(101), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [678] = 2,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(97), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [691] = 2,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(141), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [704] = 3,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    ACTIONS(179), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(29), 4,
      sym_tag,
      sym_pipe_content,
      sym__children_choice,
      aux_sym_children_repeat1,
  [719] = 2,
    ACTIONS(193), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(195), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [732] = 2,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(163), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [745] = 2,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(137), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [758] = 2,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(47), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [771] = 3,
    ACTIONS(181), 1,
      anon_sym_PIPE,
    ACTIONS(179), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(30), 4,
      sym_tag,
      sym_pipe_content,
      sym__children_choice,
      aux_sym_children_repeat1,
  [786] = 2,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(149), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [799] = 2,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(145), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [812] = 2,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(199), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [825] = 2,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(41), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [838] = 2,
    ACTIONS(201), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(203), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [851] = 2,
    ACTIONS(151), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(153), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [864] = 2,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(109), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [877] = 2,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(207), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [890] = 2,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(211), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [903] = 2,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(93), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [916] = 2,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(81), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [929] = 4,
    STATE(52), 1,
      aux_sym_script_tag_repeat1,
    ACTIONS(215), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(217), 2,
      sym_class,
      sym_id,
    ACTIONS(213), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [946] = 2,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(105), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [959] = 2,
    ACTIONS(220), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(222), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [972] = 2,
    ACTIONS(224), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(226), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [985] = 2,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(230), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [998] = 2,
    ACTIONS(232), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(234), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [1011] = 2,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
    ACTIONS(127), 4,
      anon_sym_doctype,
      anon_sym_script,
      anon_sym_style,
      sym_tag_name,
  [1024] = 3,
    ACTIONS(236), 1,
      sym__indent,
    STATE(67), 1,
      sym_children,
    ACTIONS(125), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1038] = 3,
    ACTIONS(236), 1,
      sym__indent,
    STATE(72), 1,
      sym_children,
    ACTIONS(161), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1052] = 3,
    ACTIONS(236), 1,
      sym__indent,
    STATE(80), 1,
      sym_children,
    ACTIONS(79), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1066] = 3,
    ACTIONS(236), 1,
      sym__indent,
    STATE(65), 1,
      sym_children,
    ACTIONS(107), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1080] = 3,
    ACTIONS(236), 1,
      sym__indent,
    STATE(71), 1,
      sym_children,
    ACTIONS(139), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1094] = 1,
    ACTIONS(238), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1102] = 1,
    ACTIONS(79), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1110] = 5,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(240), 1,
      anon_sym_COLON,
    ACTIONS(242), 1,
      anon_sym_,
    ACTIONS(244), 1,
      sym__newline,
    STATE(42), 1,
      sym__content_after_dot,
  [1126] = 1,
    ACTIONS(139), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1134] = 1,
    ACTIONS(201), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1142] = 5,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(248), 1,
      anon_sym_,
    ACTIONS(250), 1,
      sym__newline,
    STATE(46), 1,
      sym__content_after_dot,
  [1158] = 5,
    ACTIONS(252), 1,
      sym_content,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(258), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(99), 1,
      aux_sym__content_or_javascript,
  [1174] = 1,
    ACTIONS(107), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1182] = 1,
    ACTIONS(125), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1190] = 1,
    ACTIONS(161), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1198] = 1,
    ACTIONS(209), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1206] = 5,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      anon_sym_COLON,
    ACTIONS(157), 1,
      anon_sym_,
    ACTIONS(159), 1,
      sym__newline,
    STATE(53), 1,
      sym__content_after_dot,
  [1222] = 3,
    ACTIONS(260), 1,
      anon_sym_,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(262), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_attribute_name,
  [1234] = 5,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_COLON,
    ACTIONS(268), 1,
      anon_sym_,
    ACTIONS(270), 1,
      sym__newline,
    STATE(34), 1,
      sym__content_after_dot,
  [1250] = 5,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_COLON,
    ACTIONS(131), 1,
      anon_sym_,
    ACTIONS(133), 1,
      sym__newline,
    STATE(41), 1,
      sym__content_after_dot,
  [1266] = 5,
    ACTIONS(272), 1,
      sym_content,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(276), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(99), 1,
      aux_sym__content_or_javascript,
  [1282] = 1,
    ACTIONS(228), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1290] = 5,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      anon_sym_,
    ACTIONS(115), 1,
      sym__newline,
    STATE(72), 1,
      sym__content_after_dot,
  [1306] = 5,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(278), 1,
      anon_sym_COLON,
    ACTIONS(280), 1,
      anon_sym_,
    ACTIONS(282), 1,
      sym__newline,
    STATE(67), 1,
      sym__content_after_dot,
  [1322] = 5,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(83), 1,
      anon_sym_COLON,
    ACTIONS(85), 1,
      anon_sym_,
    ACTIONS(89), 1,
      sym__newline,
    STATE(58), 1,
      sym__content_after_dot,
  [1338] = 1,
    ACTIONS(284), 5,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_PIPE,
  [1346] = 5,
    ACTIONS(272), 1,
      sym_content,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(286), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(99), 1,
      aux_sym__content_or_javascript,
  [1362] = 2,
    STATE(53), 1,
      sym_tag,
    ACTIONS(15), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1371] = 3,
    ACTIONS(288), 1,
      anon_sym_,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(292), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [1382] = 4,
    ACTIONS(272), 1,
      sym_content,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(85), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(99), 1,
      aux_sym__content_or_javascript,
  [1395] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_content,
    ACTIONS(296), 1,
      sym__newline,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1408] = 2,
    STATE(47), 1,
      sym_tag,
    ACTIONS(15), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1417] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_content,
    ACTIONS(298), 1,
      sym__newline,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1430] = 2,
    STATE(71), 1,
      sym_tag,
    ACTIONS(179), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1439] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_content,
    ACTIONS(300), 1,
      sym__newline,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1452] = 2,
    STATE(67), 1,
      sym_tag,
    ACTIONS(179), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1461] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_content,
    ACTIONS(302), 1,
      sym__newline,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1474] = 2,
    STATE(58), 1,
      sym_tag,
    ACTIONS(15), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1483] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(282), 1,
      sym__newline,
    ACTIONS(294), 1,
      sym_content,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1496] = 2,
    STATE(44), 1,
      sym_tag,
    ACTIONS(15), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1505] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_content,
    ACTIONS(304), 1,
      sym__newline,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1518] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_content,
    ACTIONS(306), 1,
      sym__newline,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1531] = 2,
    ACTIONS(308), 1,
      anon_sym_,
    ACTIONS(310), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_attribute_name,
  [1540] = 4,
    ACTIONS(250), 1,
      sym__newline,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_content,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1553] = 2,
    STATE(72), 1,
      sym_tag,
    ACTIONS(179), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1562] = 2,
    ACTIONS(312), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(314), 2,
      sym__newline,
      anon_sym_,
  [1571] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_content,
    ACTIONS(316), 1,
      sym__newline,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1584] = 4,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(320), 1,
      sym_attribute_name,
    STATE(87), 1,
      sym_attribute,
    STATE(112), 1,
      aux_sym__attributes_repeat1,
  [1597] = 2,
    STATE(39), 1,
      sym_tag,
    ACTIONS(15), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1606] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_content,
    ACTIONS(322), 1,
      sym__newline,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1619] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_content,
    ACTIONS(324), 1,
      sym__newline,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1632] = 4,
    ACTIONS(320), 1,
      sym_attribute_name,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym_attribute,
    STATE(106), 1,
      aux_sym__attributes_repeat1,
  [1645] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_content,
    ACTIONS(328), 1,
      sym__newline,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1658] = 4,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    ACTIONS(332), 1,
      sym_attribute_name,
    STATE(87), 1,
      sym_attribute,
    STATE(112), 1,
      aux_sym__attributes_repeat1,
  [1671] = 2,
    ACTIONS(335), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(337), 2,
      sym__newline,
      anon_sym_,
  [1680] = 2,
    STATE(46), 1,
      sym_tag,
    ACTIONS(15), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1689] = 4,
    ACTIONS(244), 1,
      sym__newline,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_content,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1702] = 4,
    ACTIONS(339), 1,
      sym_attribute_value,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_quoted_attribute_value,
  [1715] = 2,
    ACTIONS(345), 1,
      anon_sym_,
    ACTIONS(347), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_attribute_name,
  [1724] = 2,
    STATE(42), 1,
      sym_tag,
    ACTIONS(15), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1733] = 4,
    ACTIONS(270), 1,
      sym__newline,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_content,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1746] = 2,
    STATE(34), 1,
      sym_tag,
    ACTIONS(15), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1755] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 1,
      sym_content,
    ACTIONS(351), 1,
      sym__newline,
    STATE(95), 1,
      aux_sym__content_or_javascript,
  [1768] = 4,
    ACTIONS(272), 1,
      sym_content,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(79), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(99), 1,
      aux_sym__content_or_javascript,
  [1781] = 2,
    STATE(41), 1,
      sym_tag,
    ACTIONS(15), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1790] = 4,
    ACTIONS(353), 1,
      sym_content,
    ACTIONS(356), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(359), 1,
      sym__newline,
    STATE(124), 1,
      aux_sym__content_or_javascript,
  [1803] = 2,
    ACTIONS(361), 1,
      anon_sym_,
    ACTIONS(363), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_attribute_name,
  [1812] = 3,
    ACTIONS(365), 1,
      sym__comment_content,
    ACTIONS(367), 1,
      sym__dedent,
    STATE(130), 1,
      aux_sym_comment_repeat1,
  [1822] = 3,
    ACTIONS(369), 1,
      sym__comment_content,
    ACTIONS(372), 1,
      sym__dedent,
    STATE(127), 1,
      aux_sym_comment_repeat1,
  [1832] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(374), 1,
      sym_content,
    STATE(102), 1,
      aux_sym__content_or_javascript,
  [1842] = 1,
    ACTIONS(376), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [1848] = 3,
    ACTIONS(365), 1,
      sym__comment_content,
    ACTIONS(378), 1,
      sym__dedent,
    STATE(127), 1,
      aux_sym_comment_repeat1,
  [1858] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(380), 1,
      sym_content,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1868] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(382), 1,
      sym_content,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1878] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(384), 1,
      sym_content,
    STATE(115), 1,
      aux_sym__content_or_javascript,
  [1888] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(386), 1,
      sym_content,
    STATE(93), 1,
      aux_sym__content_or_javascript,
  [1898] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(388), 1,
      sym_content,
    STATE(100), 1,
      aux_sym__content_or_javascript,
  [1908] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(390), 1,
      sym_content,
    STATE(119), 1,
      aux_sym__content_or_javascript,
  [1918] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(392), 1,
      sym_content,
    STATE(97), 1,
      aux_sym__content_or_javascript,
  [1928] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(394), 1,
      sym_content,
    STATE(109), 1,
      aux_sym__content_or_javascript,
  [1938] = 2,
    ACTIONS(396), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(258), 2,
      sym__dedent,
      sym_content,
  [1946] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(398), 1,
      sym_content,
    STATE(105), 1,
      aux_sym__content_or_javascript,
  [1956] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(400), 1,
      sym_content,
    STATE(108), 1,
      aux_sym__content_or_javascript,
  [1966] = 3,
    ACTIONS(365), 1,
      sym__comment_content,
    ACTIONS(378), 1,
      sym__dedent,
    STATE(144), 1,
      aux_sym_comment_repeat1,
  [1976] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(402), 1,
      sym_content,
    STATE(111), 1,
      aux_sym__content_or_javascript,
  [1986] = 3,
    ACTIONS(365), 1,
      sym__comment_content,
    ACTIONS(404), 1,
      sym__dedent,
    STATE(127), 1,
      aux_sym_comment_repeat1,
  [1996] = 2,
    ACTIONS(408), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(406), 2,
      sym__newline,
      sym_content,
  [2004] = 2,
    ACTIONS(410), 1,
      sym__comment_content,
    ACTIONS(412), 1,
      sym__newline,
  [2011] = 1,
    ACTIONS(372), 2,
      sym__dedent,
      sym__comment_content,
  [2016] = 2,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      aux_sym_quoted_attribute_value_token1,
  [2023] = 1,
    ACTIONS(330), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [2028] = 2,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      aux_sym_quoted_attribute_value_token2,
  [2035] = 1,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
  [2039] = 1,
    ACTIONS(422), 1,
      sym__indent,
  [2043] = 1,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
  [2047] = 1,
    ACTIONS(426), 1,
      sym_javascript,
  [2051] = 1,
    ACTIONS(428), 1,
      anon_sym_RBRACE_RBRACE,
  [2055] = 1,
    ACTIONS(430), 1,
      sym__newline,
  [2059] = 1,
    ACTIONS(424), 1,
      anon_sym_SQUOTE,
  [2063] = 1,
    ACTIONS(432), 1,
      sym__newline,
  [2067] = 1,
    ACTIONS(434), 1,
      sym__newline,
  [2071] = 1,
    ACTIONS(436), 1,
      sym__indent,
  [2075] = 1,
    ACTIONS(438), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 158,
  [SMALL_STATE(9)] = 187,
  [SMALL_STATE(10)] = 206,
  [SMALL_STATE(11)] = 235,
  [SMALL_STATE(12)] = 254,
  [SMALL_STATE(13)] = 273,
  [SMALL_STATE(14)] = 292,
  [SMALL_STATE(15)] = 311,
  [SMALL_STATE(16)] = 330,
  [SMALL_STATE(17)] = 359,
  [SMALL_STATE(18)] = 388,
  [SMALL_STATE(19)] = 407,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 455,
  [SMALL_STATE(22)] = 474,
  [SMALL_STATE(23)] = 493,
  [SMALL_STATE(24)] = 512,
  [SMALL_STATE(25)] = 531,
  [SMALL_STATE(26)] = 560,
  [SMALL_STATE(27)] = 579,
  [SMALL_STATE(28)] = 595,
  [SMALL_STATE(29)] = 613,
  [SMALL_STATE(30)] = 631,
  [SMALL_STATE(31)] = 649,
  [SMALL_STATE(32)] = 665,
  [SMALL_STATE(33)] = 678,
  [SMALL_STATE(34)] = 691,
  [SMALL_STATE(35)] = 704,
  [SMALL_STATE(36)] = 719,
  [SMALL_STATE(37)] = 732,
  [SMALL_STATE(38)] = 745,
  [SMALL_STATE(39)] = 758,
  [SMALL_STATE(40)] = 771,
  [SMALL_STATE(41)] = 786,
  [SMALL_STATE(42)] = 799,
  [SMALL_STATE(43)] = 812,
  [SMALL_STATE(44)] = 825,
  [SMALL_STATE(45)] = 838,
  [SMALL_STATE(46)] = 851,
  [SMALL_STATE(47)] = 864,
  [SMALL_STATE(48)] = 877,
  [SMALL_STATE(49)] = 890,
  [SMALL_STATE(50)] = 903,
  [SMALL_STATE(51)] = 916,
  [SMALL_STATE(52)] = 929,
  [SMALL_STATE(53)] = 946,
  [SMALL_STATE(54)] = 959,
  [SMALL_STATE(55)] = 972,
  [SMALL_STATE(56)] = 985,
  [SMALL_STATE(57)] = 998,
  [SMALL_STATE(58)] = 1011,
  [SMALL_STATE(59)] = 1024,
  [SMALL_STATE(60)] = 1038,
  [SMALL_STATE(61)] = 1052,
  [SMALL_STATE(62)] = 1066,
  [SMALL_STATE(63)] = 1080,
  [SMALL_STATE(64)] = 1094,
  [SMALL_STATE(65)] = 1102,
  [SMALL_STATE(66)] = 1110,
  [SMALL_STATE(67)] = 1126,
  [SMALL_STATE(68)] = 1134,
  [SMALL_STATE(69)] = 1142,
  [SMALL_STATE(70)] = 1158,
  [SMALL_STATE(71)] = 1174,
  [SMALL_STATE(72)] = 1182,
  [SMALL_STATE(73)] = 1190,
  [SMALL_STATE(74)] = 1198,
  [SMALL_STATE(75)] = 1206,
  [SMALL_STATE(76)] = 1222,
  [SMALL_STATE(77)] = 1234,
  [SMALL_STATE(78)] = 1250,
  [SMALL_STATE(79)] = 1266,
  [SMALL_STATE(80)] = 1282,
  [SMALL_STATE(81)] = 1290,
  [SMALL_STATE(82)] = 1306,
  [SMALL_STATE(83)] = 1322,
  [SMALL_STATE(84)] = 1338,
  [SMALL_STATE(85)] = 1346,
  [SMALL_STATE(86)] = 1362,
  [SMALL_STATE(87)] = 1371,
  [SMALL_STATE(88)] = 1382,
  [SMALL_STATE(89)] = 1395,
  [SMALL_STATE(90)] = 1408,
  [SMALL_STATE(91)] = 1417,
  [SMALL_STATE(92)] = 1430,
  [SMALL_STATE(93)] = 1439,
  [SMALL_STATE(94)] = 1452,
  [SMALL_STATE(95)] = 1461,
  [SMALL_STATE(96)] = 1474,
  [SMALL_STATE(97)] = 1483,
  [SMALL_STATE(98)] = 1496,
  [SMALL_STATE(99)] = 1505,
  [SMALL_STATE(100)] = 1518,
  [SMALL_STATE(101)] = 1531,
  [SMALL_STATE(102)] = 1540,
  [SMALL_STATE(103)] = 1553,
  [SMALL_STATE(104)] = 1562,
  [SMALL_STATE(105)] = 1571,
  [SMALL_STATE(106)] = 1584,
  [SMALL_STATE(107)] = 1597,
  [SMALL_STATE(108)] = 1606,
  [SMALL_STATE(109)] = 1619,
  [SMALL_STATE(110)] = 1632,
  [SMALL_STATE(111)] = 1645,
  [SMALL_STATE(112)] = 1658,
  [SMALL_STATE(113)] = 1671,
  [SMALL_STATE(114)] = 1680,
  [SMALL_STATE(115)] = 1689,
  [SMALL_STATE(116)] = 1702,
  [SMALL_STATE(117)] = 1715,
  [SMALL_STATE(118)] = 1724,
  [SMALL_STATE(119)] = 1733,
  [SMALL_STATE(120)] = 1746,
  [SMALL_STATE(121)] = 1755,
  [SMALL_STATE(122)] = 1768,
  [SMALL_STATE(123)] = 1781,
  [SMALL_STATE(124)] = 1790,
  [SMALL_STATE(125)] = 1803,
  [SMALL_STATE(126)] = 1812,
  [SMALL_STATE(127)] = 1822,
  [SMALL_STATE(128)] = 1832,
  [SMALL_STATE(129)] = 1842,
  [SMALL_STATE(130)] = 1848,
  [SMALL_STATE(131)] = 1858,
  [SMALL_STATE(132)] = 1868,
  [SMALL_STATE(133)] = 1878,
  [SMALL_STATE(134)] = 1888,
  [SMALL_STATE(135)] = 1898,
  [SMALL_STATE(136)] = 1908,
  [SMALL_STATE(137)] = 1918,
  [SMALL_STATE(138)] = 1928,
  [SMALL_STATE(139)] = 1938,
  [SMALL_STATE(140)] = 1946,
  [SMALL_STATE(141)] = 1956,
  [SMALL_STATE(142)] = 1966,
  [SMALL_STATE(143)] = 1976,
  [SMALL_STATE(144)] = 1986,
  [SMALL_STATE(145)] = 1996,
  [SMALL_STATE(146)] = 2004,
  [SMALL_STATE(147)] = 2011,
  [SMALL_STATE(148)] = 2016,
  [SMALL_STATE(149)] = 2023,
  [SMALL_STATE(150)] = 2028,
  [SMALL_STATE(151)] = 2035,
  [SMALL_STATE(152)] = 2039,
  [SMALL_STATE(153)] = 2043,
  [SMALL_STATE(154)] = 2047,
  [SMALL_STATE(155)] = 2051,
  [SMALL_STATE(156)] = 2055,
  [SMALL_STATE(157)] = 2059,
  [SMALL_STATE(158)] = 2063,
  [SMALL_STATE(159)] = 2067,
  [SMALL_STATE(160)] = 2071,
  [SMALL_STATE(161)] = 2075,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_tag, 5),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_tag, 5),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_tag, 5),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_tag, 5),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_tag, 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_tag, 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_tag, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_tag, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_tag, 6),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_tag, 6),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_tag, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_tag, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_tag, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_tag, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_tag, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_tag, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_tag, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_tag, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_tag, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_tag, 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(8),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(121),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_tag_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_tag_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_tag_repeat1, 2), SHIFT_REPEAT(52),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_tag, 7),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_tag, 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_tag, 7),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_tag, 7),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(99),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(154),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attributes_repeat1, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attributes, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attributes, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attributes_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attributes_repeat1, 2), SHIFT_REPEAT(76),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attributes, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attributes, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(124),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(154),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(159),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [420] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pug_external_scanner_create(void);
void tree_sitter_pug_external_scanner_destroy(void *);
bool tree_sitter_pug_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pug_external_scanner_serialize(void *, char *);
void tree_sitter_pug_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_pug_external_scanner_create,
      tree_sitter_pug_external_scanner_destroy,
      tree_sitter_pug_external_scanner_scan,
      tree_sitter_pug_external_scanner_serialize,
      tree_sitter_pug_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
