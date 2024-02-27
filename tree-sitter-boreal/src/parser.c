#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_module = 1,
  anon_sym_where = 2,
  sym_module_name = 3,
  anon_sym_EQ = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_type = 7,
  anon_sym_PIPE = 8,
  anon_sym_COMMA = 9,
  anon_sym_COLON = 10,
  aux_sym_argument_token1 = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_let = 14,
  anon_sym_in = 15,
  anon_sym_case = 16,
  anon_sym_of = 17,
  anon_sym_DASH_GT = 18,
  sym_constructor = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_STAR = 22,
  anon_sym_SLASH = 23,
  sym_source_file = 24,
  sym_module_declaration = 25,
  sym_top_level_declarations = 26,
  sym_datatype_declaration = 27,
  sym_datatype_head = 28,
  sym_sumtype_body = 29,
  sym_record_body = 30,
  sym_record_member = 31,
  sym_function_declaration = 32,
  sym_function_head = 33,
  sym_argument = 34,
  sym_function_name = 35,
  sym_function_body = 36,
  sym_simple_expression = 37,
  sym_let_binding = 38,
  sym_let_binding_body = 39,
  sym_case_expression = 40,
  sym_alternatives = 41,
  sym_alternative = 42,
  sym_pattern = 43,
  sym_identifier = 44,
  sym_binary_operation = 45,
  aux_sym_top_level_declarations_repeat1 = 46,
  aux_sym_datatype_head_repeat1 = 47,
  aux_sym_sumtype_body_repeat1 = 48,
  aux_sym_record_body_repeat1 = 49,
  aux_sym_function_head_repeat1 = 50,
  aux_sym_case_expression_repeat1 = 51,
  aux_sym_alternatives_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [sym_module_name] = "module_name",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
  [anon_sym_PIPE] = "|",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [aux_sym_argument_token1] = "argument_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_case] = "case",
  [anon_sym_of] = "of",
  [anon_sym_DASH_GT] = "->",
  [sym_constructor] = "constructor",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_source_file] = "source_file",
  [sym_module_declaration] = "module_declaration",
  [sym_top_level_declarations] = "top_level_declarations",
  [sym_datatype_declaration] = "datatype_declaration",
  [sym_datatype_head] = "datatype_head",
  [sym_sumtype_body] = "sumtype_body",
  [sym_record_body] = "record_body",
  [sym_record_member] = "record_member",
  [sym_function_declaration] = "function_declaration",
  [sym_function_head] = "function_head",
  [sym_argument] = "argument",
  [sym_function_name] = "function_name",
  [sym_function_body] = "function_body",
  [sym_simple_expression] = "simple_expression",
  [sym_let_binding] = "let_binding",
  [sym_let_binding_body] = "let_binding_body",
  [sym_case_expression] = "case_expression",
  [sym_alternatives] = "alternatives",
  [sym_alternative] = "alternative",
  [sym_pattern] = "pattern",
  [sym_identifier] = "identifier",
  [sym_binary_operation] = "binary_operation",
  [aux_sym_top_level_declarations_repeat1] = "top_level_declarations_repeat1",
  [aux_sym_datatype_head_repeat1] = "datatype_head_repeat1",
  [aux_sym_sumtype_body_repeat1] = "sumtype_body_repeat1",
  [aux_sym_record_body_repeat1] = "record_body_repeat1",
  [aux_sym_function_head_repeat1] = "function_head_repeat1",
  [aux_sym_case_expression_repeat1] = "case_expression_repeat1",
  [aux_sym_alternatives_repeat1] = "alternatives_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_where] = anon_sym_where,
  [sym_module_name] = sym_module_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_argument_token1] = aux_sym_argument_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_constructor] = sym_constructor,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_source_file] = sym_source_file,
  [sym_module_declaration] = sym_module_declaration,
  [sym_top_level_declarations] = sym_top_level_declarations,
  [sym_datatype_declaration] = sym_datatype_declaration,
  [sym_datatype_head] = sym_datatype_head,
  [sym_sumtype_body] = sym_sumtype_body,
  [sym_record_body] = sym_record_body,
  [sym_record_member] = sym_record_member,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_head] = sym_function_head,
  [sym_argument] = sym_argument,
  [sym_function_name] = sym_function_name,
  [sym_function_body] = sym_function_body,
  [sym_simple_expression] = sym_simple_expression,
  [sym_let_binding] = sym_let_binding,
  [sym_let_binding_body] = sym_let_binding_body,
  [sym_case_expression] = sym_case_expression,
  [sym_alternatives] = sym_alternatives,
  [sym_alternative] = sym_alternative,
  [sym_pattern] = sym_pattern,
  [sym_identifier] = sym_identifier,
  [sym_binary_operation] = sym_binary_operation,
  [aux_sym_top_level_declarations_repeat1] = aux_sym_top_level_declarations_repeat1,
  [aux_sym_datatype_head_repeat1] = aux_sym_datatype_head_repeat1,
  [aux_sym_sumtype_body_repeat1] = aux_sym_sumtype_body_repeat1,
  [aux_sym_record_body_repeat1] = aux_sym_record_body_repeat1,
  [aux_sym_function_head_repeat1] = aux_sym_function_head_repeat1,
  [aux_sym_case_expression_repeat1] = aux_sym_case_expression_repeat1,
  [aux_sym_alternatives_repeat1] = aux_sym_alternatives_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_constructor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_top_level_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_datatype_head] = {
    .visible = true,
    .named = true,
  },
  [sym_sumtype_body] = {
    .visible = true,
    .named = true,
  },
  [sym_record_body] = {
    .visible = true,
    .named = true,
  },
  [sym_record_member] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_head] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_let_binding_body] = {
    .visible = true,
    .named = true,
  },
  [sym_case_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_alternatives] = {
    .visible = true,
    .named = true,
  },
  [sym_alternative] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_top_level_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datatype_head_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sumtype_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_head_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alternatives_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternatives = 1,
  field_binding_body = 2,
  field_binding_name = 3,
  field_binding_value = 4,
  field_body = 5,
  field_case_expression = 6,
  field_conditional = 7,
  field_head = 8,
  field_name = 9,
  field_pattern = 10,
  field_rhs = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternatives] = "alternatives",
  [field_binding_body] = "binding_body",
  [field_binding_name] = "binding_name",
  [field_binding_value] = "binding_value",
  [field_body] = "body",
  [field_case_expression] = "case_expression",
  [field_conditional] = "conditional",
  [field_head] = "head",
  [field_name] = "name",
  [field_pattern] = "pattern",
  [field_rhs] = "rhs",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_body, 2},
    {field_head, 0},
  [3] =
    {field_case_expression, 0},
  [4] =
    {field_head, 0},
  [5] =
    {field_alternatives, 3},
    {field_conditional, 1},
  [7] =
    {field_binding_body, 5},
    {field_binding_name, 1},
    {field_binding_value, 3},
  [10] =
    {field_pattern, 0},
    {field_rhs, 2},
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
  [11] = 5,
  [12] = 12,
  [13] = 5,
  [14] = 4,
  [15] = 4,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 5,
  [21] = 21,
  [22] = 16,
  [23] = 4,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 25,
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 27,
  [35] = 25,
  [36] = 30,
  [37] = 32,
  [38] = 38,
  [39] = 39,
  [40] = 32,
  [41] = 27,
  [42] = 25,
  [43] = 30,
  [44] = 32,
  [45] = 30,
  [46] = 27,
  [47] = 47,
  [48] = 6,
  [49] = 9,
  [50] = 8,
  [51] = 16,
  [52] = 52,
  [53] = 16,
  [54] = 19,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 18,
  [59] = 19,
  [60] = 21,
  [61] = 18,
  [62] = 19,
  [63] = 21,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 18,
  [68] = 21,
  [69] = 69,
  [70] = 57,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(18);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 29:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_module_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'a') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'f') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'n') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'p') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 't') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == 'y') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_of);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(65);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 31},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 31},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 31},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 31},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 31},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 31},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 31},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 31},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 31},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 31},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 31},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 31},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 31},
  [88] = {.lex_state = 31},
  [89] = {.lex_state = 31},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 31},
  [92] = {.lex_state = 31},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 31},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 28},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_constructor] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(106),
    [sym_module_declaration] = STATE(12),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      aux_sym_argument_token1,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      anon_sym_case,
    ACTIONS(13), 1,
      sym_constructor,
    STATE(9), 1,
      sym_binary_operation,
    STATE(24), 1,
      sym_simple_expression,
    STATE(87), 1,
      sym_case_expression,
    STATE(91), 1,
      sym_function_body,
    STATE(92), 1,
      sym_let_binding,
    STATE(4), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [35] = 9,
    ACTIONS(5), 1,
      aux_sym_argument_token1,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      sym_constructor,
    STATE(9), 1,
      sym_binary_operation,
    STATE(38), 1,
      sym_simple_expression,
    STATE(81), 1,
      sym_let_binding,
    STATE(88), 1,
      sym_let_binding_body,
    STATE(4), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [64] = 3,
    ACTIONS(17), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    STATE(5), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(15), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [81] = 4,
    ACTIONS(21), 1,
      anon_sym_type,
    ACTIONS(23), 1,
      aux_sym_argument_token1,
    STATE(5), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(19), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [100] = 2,
    ACTIONS(28), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    ACTIONS(26), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [114] = 7,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_type,
    ACTIONS(34), 1,
      aux_sym_argument_token1,
    STATE(80), 1,
      sym_function_name,
    STATE(114), 1,
      sym_datatype_head,
    STATE(115), 1,
      sym_function_head,
    STATE(10), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [138] = 2,
    ACTIONS(38), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    ACTIONS(36), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [152] = 2,
    ACTIONS(17), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    ACTIONS(15), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [166] = 7,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_type,
    ACTIONS(45), 1,
      aux_sym_argument_token1,
    STATE(80), 1,
      sym_function_name,
    STATE(114), 1,
      sym_datatype_head,
    STATE(115), 1,
      sym_function_head,
    STATE(10), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [190] = 3,
    ACTIONS(48), 1,
      aux_sym_argument_token1,
    STATE(11), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(19), 6,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [206] = 7,
    ACTIONS(32), 1,
      anon_sym_type,
    ACTIONS(34), 1,
      aux_sym_argument_token1,
    STATE(80), 1,
      sym_function_name,
    STATE(102), 1,
      sym_top_level_declarations,
    STATE(114), 1,
      sym_datatype_head,
    STATE(115), 1,
      sym_function_head,
    STATE(7), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [230] = 4,
    ACTIONS(21), 1,
      anon_sym_of,
    ACTIONS(51), 1,
      aux_sym_argument_token1,
    STATE(13), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(19), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [247] = 4,
    ACTIONS(17), 1,
      anon_sym_of,
    ACTIONS(54), 1,
      aux_sym_argument_token1,
    STATE(13), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(15), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [264] = 3,
    ACTIONS(56), 1,
      aux_sym_argument_token1,
    STATE(11), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(15), 5,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [279] = 2,
    ACTIONS(60), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [292] = 6,
    ACTIONS(66), 1,
      anon_sym_PLUS,
    ACTIONS(68), 1,
      anon_sym_DASH,
    ACTIONS(70), 1,
      anon_sym_STAR,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(64), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [313] = 3,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    ACTIONS(38), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [328] = 4,
    ACTIONS(70), 1,
      anon_sym_STAR,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    ACTIONS(38), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    ACTIONS(36), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [345] = 4,
    ACTIONS(21), 1,
      anon_sym_in,
    ACTIONS(74), 1,
      aux_sym_argument_token1,
    STATE(20), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(19), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [362] = 5,
    ACTIONS(68), 1,
      anon_sym_DASH,
    ACTIONS(70), 1,
      anon_sym_STAR,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    ACTIONS(38), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
  [381] = 1,
    ACTIONS(58), 8,
      anon_sym_EQ,
      anon_sym_COLON,
      aux_sym_argument_token1,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [392] = 4,
    ACTIONS(17), 1,
      anon_sym_in,
    ACTIONS(77), 1,
      aux_sym_argument_token1,
    STATE(20), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(15), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [409] = 6,
    ACTIONS(66), 1,
      anon_sym_PLUS,
    ACTIONS(68), 1,
      anon_sym_DASH,
    ACTIONS(70), 1,
      anon_sym_STAR,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [429] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(83), 1,
      aux_sym_argument_token1,
    STATE(9), 1,
      sym_binary_operation,
    STATE(18), 1,
      sym_simple_expression,
    STATE(4), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [449] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(56), 1,
      aux_sym_argument_token1,
    STATE(9), 1,
      sym_binary_operation,
    STATE(57), 1,
      sym_simple_expression,
    STATE(15), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [469] = 6,
    ACTIONS(85), 1,
      aux_sym_argument_token1,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_constructor,
    STATE(49), 1,
      sym_binary_operation,
    STATE(50), 1,
      sym_simple_expression,
    STATE(23), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [489] = 6,
    ACTIONS(85), 1,
      aux_sym_argument_token1,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_constructor,
    STATE(49), 1,
      sym_binary_operation,
    STATE(58), 1,
      sym_simple_expression,
    STATE(23), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [509] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(56), 1,
      aux_sym_argument_token1,
    STATE(9), 1,
      sym_binary_operation,
    STATE(70), 1,
      sym_simple_expression,
    STATE(15), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [529] = 6,
    ACTIONS(85), 1,
      aux_sym_argument_token1,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_constructor,
    STATE(49), 1,
      sym_binary_operation,
    STATE(59), 1,
      sym_simple_expression,
    STATE(23), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [549] = 6,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_constructor,
    ACTIONS(91), 1,
      aux_sym_argument_token1,
    STATE(49), 1,
      sym_binary_operation,
    STATE(71), 1,
      sym_simple_expression,
    STATE(14), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [569] = 6,
    ACTIONS(85), 1,
      aux_sym_argument_token1,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_constructor,
    STATE(49), 1,
      sym_binary_operation,
    STATE(60), 1,
      sym_simple_expression,
    STATE(23), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [589] = 6,
    ACTIONS(85), 1,
      aux_sym_argument_token1,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_constructor,
    STATE(49), 1,
      sym_binary_operation,
    STATE(65), 1,
      sym_simple_expression,
    STATE(23), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [609] = 6,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_constructor,
    ACTIONS(91), 1,
      aux_sym_argument_token1,
    STATE(49), 1,
      sym_binary_operation,
    STATE(50), 1,
      sym_simple_expression,
    STATE(14), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [629] = 6,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_constructor,
    ACTIONS(91), 1,
      aux_sym_argument_token1,
    STATE(49), 1,
      sym_binary_operation,
    STATE(61), 1,
      sym_simple_expression,
    STATE(14), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [649] = 6,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_constructor,
    ACTIONS(91), 1,
      aux_sym_argument_token1,
    STATE(49), 1,
      sym_binary_operation,
    STATE(62), 1,
      sym_simple_expression,
    STATE(14), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [669] = 6,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_constructor,
    ACTIONS(91), 1,
      aux_sym_argument_token1,
    STATE(49), 1,
      sym_binary_operation,
    STATE(63), 1,
      sym_simple_expression,
    STATE(14), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [689] = 6,
    ACTIONS(66), 1,
      anon_sym_PLUS,
    ACTIONS(68), 1,
      anon_sym_DASH,
    ACTIONS(70), 1,
      anon_sym_STAR,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [709] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(83), 1,
      aux_sym_argument_token1,
    STATE(9), 1,
      sym_binary_operation,
    STATE(17), 1,
      sym_simple_expression,
    STATE(4), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [729] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(56), 1,
      aux_sym_argument_token1,
    STATE(9), 1,
      sym_binary_operation,
    STATE(68), 1,
      sym_simple_expression,
    STATE(15), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [749] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(56), 1,
      aux_sym_argument_token1,
    STATE(8), 1,
      sym_simple_expression,
    STATE(9), 1,
      sym_binary_operation,
    STATE(15), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [769] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(56), 1,
      aux_sym_argument_token1,
    STATE(9), 1,
      sym_binary_operation,
    STATE(67), 1,
      sym_simple_expression,
    STATE(15), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [789] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(56), 1,
      aux_sym_argument_token1,
    STATE(9), 1,
      sym_binary_operation,
    STATE(54), 1,
      sym_simple_expression,
    STATE(15), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [809] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(83), 1,
      aux_sym_argument_token1,
    STATE(9), 1,
      sym_binary_operation,
    STATE(21), 1,
      sym_simple_expression,
    STATE(4), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [829] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(83), 1,
      aux_sym_argument_token1,
    STATE(9), 1,
      sym_binary_operation,
    STATE(19), 1,
      sym_simple_expression,
    STATE(4), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [849] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(83), 1,
      aux_sym_argument_token1,
    STATE(8), 1,
      sym_simple_expression,
    STATE(9), 1,
      sym_binary_operation,
    STATE(4), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [869] = 4,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(99), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    STATE(52), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [884] = 1,
    ACTIONS(26), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [893] = 1,
    ACTIONS(15), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [902] = 1,
    ACTIONS(36), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [911] = 2,
    ACTIONS(60), 2,
      aux_sym_argument_token1,
      anon_sym_of,
    ACTIONS(58), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [922] = 4,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      anon_sym_PIPE,
    ACTIONS(105), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    STATE(52), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [937] = 2,
    ACTIONS(60), 2,
      aux_sym_argument_token1,
      anon_sym_in,
    ACTIONS(58), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [948] = 3,
    ACTIONS(110), 1,
      anon_sym_STAR,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    ACTIONS(36), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [960] = 4,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_PIPE,
    STATE(55), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(116), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [974] = 4,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [988] = 5,
    ACTIONS(110), 1,
      anon_sym_STAR,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DASH,
  [1004] = 2,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(36), 4,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [1014] = 3,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(36), 3,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1026] = 4,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(36), 2,
      anon_sym_in,
      anon_sym_PLUS,
  [1040] = 2,
    ACTIONS(139), 1,
      anon_sym_SLASH,
    ACTIONS(36), 4,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [1050] = 3,
    ACTIONS(139), 1,
      anon_sym_SLASH,
    ACTIONS(141), 1,
      anon_sym_STAR,
    ACTIONS(36), 3,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1062] = 4,
    ACTIONS(139), 1,
      anon_sym_SLASH,
    ACTIONS(141), 1,
      anon_sym_STAR,
    ACTIONS(143), 1,
      anon_sym_DASH,
    ACTIONS(36), 2,
      anon_sym_of,
      anon_sym_PLUS,
  [1076] = 4,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      anon_sym_PIPE,
    STATE(64), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(147), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1090] = 5,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      anon_sym_in,
    ACTIONS(154), 1,
      anon_sym_PLUS,
  [1106] = 4,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(158), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1120] = 2,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    ACTIONS(36), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [1130] = 4,
    ACTIONS(110), 1,
      anon_sym_STAR,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(36), 2,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [1144] = 4,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(162), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1158] = 5,
    ACTIONS(110), 1,
      anon_sym_STAR,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_DASH,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
  [1174] = 5,
    ACTIONS(139), 1,
      anon_sym_SLASH,
    ACTIONS(141), 1,
      anon_sym_STAR,
    ACTIONS(143), 1,
      anon_sym_DASH,
    ACTIONS(168), 1,
      anon_sym_of,
    ACTIONS(170), 1,
      anon_sym_PLUS,
  [1190] = 4,
    ACTIONS(164), 1,
      anon_sym_PIPE,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(174), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1204] = 3,
    ACTIONS(176), 1,
      anon_sym_EQ,
    ACTIONS(178), 1,
      aux_sym_argument_token1,
    STATE(73), 2,
      sym_argument,
      aux_sym_function_head_repeat1,
  [1215] = 3,
    ACTIONS(56), 1,
      aux_sym_argument_token1,
    ACTIONS(181), 1,
      anon_sym_EQ,
    STATE(75), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [1226] = 3,
    ACTIONS(56), 1,
      aux_sym_argument_token1,
    ACTIONS(183), 1,
      anon_sym_EQ,
    STATE(11), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [1237] = 4,
    ACTIONS(56), 1,
      aux_sym_argument_token1,
    STATE(93), 1,
      sym_record_member,
    STATE(103), 1,
      sym_record_body,
    STATE(104), 1,
      sym_identifier,
  [1250] = 2,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(147), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1259] = 3,
    ACTIONS(185), 1,
      anon_sym_EQ,
    ACTIONS(187), 1,
      aux_sym_argument_token1,
    STATE(73), 2,
      sym_argument,
      aux_sym_function_head_repeat1,
  [1270] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(116), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1279] = 3,
    ACTIONS(187), 1,
      aux_sym_argument_token1,
    ACTIONS(189), 1,
      anon_sym_EQ,
    STATE(78), 2,
      sym_argument,
      aux_sym_function_head_repeat1,
  [1290] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1298] = 3,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_record_body_repeat1,
  [1308] = 3,
    ACTIONS(195), 1,
      sym_constructor,
    STATE(79), 1,
      sym_alternative,
    STATE(111), 1,
      sym_pattern,
  [1318] = 3,
    ACTIONS(56), 1,
      aux_sym_argument_token1,
    STATE(101), 1,
      sym_record_member,
    STATE(104), 1,
      sym_identifier,
  [1328] = 2,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1336] = 3,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      sym_constructor,
    STATE(89), 1,
      sym_sumtype_body,
  [1346] = 2,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1354] = 2,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1362] = 2,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1370] = 2,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    STATE(47), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [1378] = 2,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1386] = 2,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1394] = 3,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_record_body_repeat1,
  [1404] = 3,
    ACTIONS(195), 1,
      sym_constructor,
    STATE(69), 1,
      sym_alternative,
    STATE(111), 1,
      sym_pattern,
  [1414] = 3,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_record_body_repeat1,
  [1424] = 1,
    ACTIONS(228), 2,
      anon_sym_EQ,
      aux_sym_argument_token1,
  [1429] = 2,
    ACTIONS(56), 1,
      aux_sym_argument_token1,
    STATE(112), 1,
      sym_identifier,
  [1436] = 1,
    ACTIONS(230), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1441] = 1,
    ACTIONS(232), 2,
      anon_sym_EQ,
      aux_sym_argument_token1,
  [1446] = 1,
    ACTIONS(234), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1451] = 1,
    ACTIONS(223), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1456] = 1,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
  [1460] = 1,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
  [1464] = 1,
    ACTIONS(240), 1,
      anon_sym_COLON,
  [1468] = 1,
    ACTIONS(242), 1,
      anon_sym_where,
  [1472] = 1,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
  [1476] = 1,
    ACTIONS(246), 1,
      sym_constructor,
  [1480] = 1,
    ACTIONS(248), 1,
      sym_constructor,
  [1484] = 1,
    ACTIONS(250), 1,
      sym_constructor,
  [1488] = 1,
    ACTIONS(252), 1,
      anon_sym_DASH_GT,
  [1492] = 1,
    ACTIONS(254), 1,
      anon_sym_DASH_GT,
  [1496] = 1,
    ACTIONS(256), 1,
      anon_sym_EQ,
  [1500] = 1,
    ACTIONS(258), 1,
      sym_module_name,
  [1504] = 1,
    ACTIONS(260), 1,
      anon_sym_EQ,
  [1508] = 1,
    ACTIONS(262), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 166,
  [SMALL_STATE(11)] = 190,
  [SMALL_STATE(12)] = 206,
  [SMALL_STATE(13)] = 230,
  [SMALL_STATE(14)] = 247,
  [SMALL_STATE(15)] = 264,
  [SMALL_STATE(16)] = 279,
  [SMALL_STATE(17)] = 292,
  [SMALL_STATE(18)] = 313,
  [SMALL_STATE(19)] = 328,
  [SMALL_STATE(20)] = 345,
  [SMALL_STATE(21)] = 362,
  [SMALL_STATE(22)] = 381,
  [SMALL_STATE(23)] = 392,
  [SMALL_STATE(24)] = 409,
  [SMALL_STATE(25)] = 429,
  [SMALL_STATE(26)] = 449,
  [SMALL_STATE(27)] = 469,
  [SMALL_STATE(28)] = 489,
  [SMALL_STATE(29)] = 509,
  [SMALL_STATE(30)] = 529,
  [SMALL_STATE(31)] = 549,
  [SMALL_STATE(32)] = 569,
  [SMALL_STATE(33)] = 589,
  [SMALL_STATE(34)] = 609,
  [SMALL_STATE(35)] = 629,
  [SMALL_STATE(36)] = 649,
  [SMALL_STATE(37)] = 669,
  [SMALL_STATE(38)] = 689,
  [SMALL_STATE(39)] = 709,
  [SMALL_STATE(40)] = 729,
  [SMALL_STATE(41)] = 749,
  [SMALL_STATE(42)] = 769,
  [SMALL_STATE(43)] = 789,
  [SMALL_STATE(44)] = 809,
  [SMALL_STATE(45)] = 829,
  [SMALL_STATE(46)] = 849,
  [SMALL_STATE(47)] = 869,
  [SMALL_STATE(48)] = 884,
  [SMALL_STATE(49)] = 893,
  [SMALL_STATE(50)] = 902,
  [SMALL_STATE(51)] = 911,
  [SMALL_STATE(52)] = 922,
  [SMALL_STATE(53)] = 937,
  [SMALL_STATE(54)] = 948,
  [SMALL_STATE(55)] = 960,
  [SMALL_STATE(56)] = 974,
  [SMALL_STATE(57)] = 988,
  [SMALL_STATE(58)] = 1004,
  [SMALL_STATE(59)] = 1014,
  [SMALL_STATE(60)] = 1026,
  [SMALL_STATE(61)] = 1040,
  [SMALL_STATE(62)] = 1050,
  [SMALL_STATE(63)] = 1062,
  [SMALL_STATE(64)] = 1076,
  [SMALL_STATE(65)] = 1090,
  [SMALL_STATE(66)] = 1106,
  [SMALL_STATE(67)] = 1120,
  [SMALL_STATE(68)] = 1130,
  [SMALL_STATE(69)] = 1144,
  [SMALL_STATE(70)] = 1158,
  [SMALL_STATE(71)] = 1174,
  [SMALL_STATE(72)] = 1190,
  [SMALL_STATE(73)] = 1204,
  [SMALL_STATE(74)] = 1215,
  [SMALL_STATE(75)] = 1226,
  [SMALL_STATE(76)] = 1237,
  [SMALL_STATE(77)] = 1250,
  [SMALL_STATE(78)] = 1259,
  [SMALL_STATE(79)] = 1270,
  [SMALL_STATE(80)] = 1279,
  [SMALL_STATE(81)] = 1290,
  [SMALL_STATE(82)] = 1298,
  [SMALL_STATE(83)] = 1308,
  [SMALL_STATE(84)] = 1318,
  [SMALL_STATE(85)] = 1328,
  [SMALL_STATE(86)] = 1336,
  [SMALL_STATE(87)] = 1346,
  [SMALL_STATE(88)] = 1354,
  [SMALL_STATE(89)] = 1362,
  [SMALL_STATE(90)] = 1370,
  [SMALL_STATE(91)] = 1378,
  [SMALL_STATE(92)] = 1386,
  [SMALL_STATE(93)] = 1394,
  [SMALL_STATE(94)] = 1404,
  [SMALL_STATE(95)] = 1414,
  [SMALL_STATE(96)] = 1424,
  [SMALL_STATE(97)] = 1429,
  [SMALL_STATE(98)] = 1436,
  [SMALL_STATE(99)] = 1441,
  [SMALL_STATE(100)] = 1446,
  [SMALL_STATE(101)] = 1451,
  [SMALL_STATE(102)] = 1456,
  [SMALL_STATE(103)] = 1460,
  [SMALL_STATE(104)] = 1464,
  [SMALL_STATE(105)] = 1468,
  [SMALL_STATE(106)] = 1472,
  [SMALL_STATE(107)] = 1476,
  [SMALL_STATE(108)] = 1480,
  [SMALL_STATE(109)] = 1484,
  [SMALL_STATE(110)] = 1488,
  [SMALL_STATE(111)] = 1492,
  [SMALL_STATE(112)] = 1496,
  [SMALL_STATE(113)] = 1500,
  [SMALL_STATE(114)] = 1504,
  [SMALL_STATE(115)] = 1508,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_datatype_head_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datatype_head_repeat1, 2), SHIFT_REPEAT(16),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 3),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declarations, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(108),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(99),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2), SHIFT_REPEAT(22),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datatype_head_repeat1, 2), SHIFT_REPEAT(51),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3, .production_id = 7),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative, 3, .production_id = 7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datatype_head_repeat1, 2), SHIFT_REPEAT(53),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, .production_id = 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 4, .production_id = 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2), SHIFT_REPEAT(94),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(83),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sumtype_body, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sumtype_body, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sumtype_body_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sumtype_body_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sumtype_body_repeat1, 2), SHIFT_REPEAT(109),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sumtype_body, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sumtype_body, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_head_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_head_repeat1, 2), SHIFT_REPEAT(96),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 2, .production_id = 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 3, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_head, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_head, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 5, .production_id = 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 5, .production_id = 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1, .production_id = 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 6, .production_id = 6),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 6, .production_id = 6),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2), SHIFT_REPEAT(84),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_member, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [244] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_boreal(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
