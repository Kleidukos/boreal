#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
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
  sym_function_application = 38,
  sym_let_binding = 39,
  sym_let_binding_body = 40,
  sym_case_expression = 41,
  sym_alternatives = 42,
  sym_alternative = 43,
  sym_pattern = 44,
  sym_identifier = 45,
  sym_binary_operation = 46,
  aux_sym_top_level_declarations_repeat1 = 47,
  aux_sym_datatype_head_repeat1 = 48,
  aux_sym_sumtype_body_repeat1 = 49,
  aux_sym_record_body_repeat1 = 50,
  aux_sym_function_head_repeat1 = 51,
  aux_sym_case_expression_repeat1 = 52,
  aux_sym_alternatives_repeat1 = 53,
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
  [sym_function_application] = "function_application",
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
  [sym_function_application] = sym_function_application,
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
  [sym_function_application] = {
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
  [11] = 4,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 4,
  [21] = 5,
  [22] = 18,
  [23] = 23,
  [24] = 19,
  [25] = 4,
  [26] = 5,
  [27] = 16,
  [28] = 15,
  [29] = 18,
  [30] = 16,
  [31] = 19,
  [32] = 13,
  [33] = 5,
  [34] = 23,
  [35] = 35,
  [36] = 36,
  [37] = 18,
  [38] = 16,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 13,
  [43] = 43,
  [44] = 19,
  [45] = 45,
  [46] = 46,
  [47] = 9,
  [48] = 23,
  [49] = 6,
  [50] = 50,
  [51] = 51,
  [52] = 8,
  [53] = 23,
  [54] = 39,
  [55] = 55,
  [56] = 43,
  [57] = 40,
  [58] = 58,
  [59] = 39,
  [60] = 43,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 40,
  [65] = 40,
  [66] = 66,
  [67] = 39,
  [68] = 43,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 71,
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
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 31},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 31},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 31},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 31},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 31},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 31},
  [63] = {.lex_state = 31},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 31},
  [70] = {.lex_state = 31},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 31},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 31},
  [81] = {.lex_state = 31},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 31},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 31},
  [86] = {.lex_state = 31},
  [87] = {.lex_state = 31},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 31},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 31},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 31},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 28},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 4},
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
    [sym_source_file] = STATE(112),
    [sym_module_declaration] = STATE(7),
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
    STATE(46), 1,
      sym_simple_expression,
    STATE(83), 1,
      sym_case_expression,
    STATE(85), 1,
      sym_let_binding,
    STATE(86), 1,
      sym_function_body,
    STATE(5), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(6), 2,
      sym_function_application,
      sym_binary_operation,
  [36] = 9,
    ACTIONS(5), 1,
      aux_sym_argument_token1,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      sym_constructor,
    STATE(45), 1,
      sym_simple_expression,
    STATE(91), 1,
      sym_let_binding_body,
    STATE(93), 1,
      sym_let_binding,
    STATE(5), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(6), 2,
      sym_function_application,
      sym_binary_operation,
  [66] = 4,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      aux_sym_argument_token1,
    STATE(4), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(15), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [85] = 3,
    ACTIONS(24), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    STATE(4), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(22), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [102] = 2,
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
  [116] = 7,
    ACTIONS(30), 1,
      anon_sym_type,
    ACTIONS(32), 1,
      aux_sym_argument_token1,
    STATE(79), 1,
      sym_function_name,
    STATE(106), 1,
      sym_top_level_declarations,
    STATE(107), 1,
      sym_datatype_head,
    STATE(115), 1,
      sym_function_head,
    STATE(12), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [140] = 2,
    ACTIONS(36), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    ACTIONS(34), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [154] = 2,
    ACTIONS(40), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    ACTIONS(38), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [168] = 7,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_type,
    ACTIONS(47), 1,
      aux_sym_argument_token1,
    STATE(79), 1,
      sym_function_name,
    STATE(107), 1,
      sym_datatype_head,
    STATE(115), 1,
      sym_function_head,
    STATE(10), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [192] = 3,
    ACTIONS(50), 1,
      aux_sym_argument_token1,
    STATE(11), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(15), 6,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [208] = 7,
    ACTIONS(30), 1,
      anon_sym_type,
    ACTIONS(32), 1,
      aux_sym_argument_token1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym_function_name,
    STATE(107), 1,
      sym_datatype_head,
    STATE(115), 1,
      sym_function_head,
    STATE(10), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [232] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(55), 1,
      aux_sym_argument_token1,
    STATE(65), 1,
      sym_simple_expression,
    STATE(6), 2,
      sym_function_application,
      sym_binary_operation,
    STATE(33), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [253] = 6,
    ACTIONS(57), 1,
      aux_sym_argument_token1,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_constructor,
    STATE(66), 1,
      sym_simple_expression,
    STATE(26), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(49), 2,
      sym_function_application,
      sym_binary_operation,
  [274] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(55), 1,
      aux_sym_argument_token1,
    STATE(71), 1,
      sym_simple_expression,
    STATE(6), 2,
      sym_function_application,
      sym_binary_operation,
    STATE(33), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [295] = 6,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_constructor,
    ACTIONS(63), 1,
      aux_sym_argument_token1,
    STATE(52), 1,
      sym_simple_expression,
    STATE(21), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(49), 2,
      sym_function_application,
      sym_binary_operation,
  [316] = 6,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_constructor,
    ACTIONS(63), 1,
      aux_sym_argument_token1,
    STATE(64), 1,
      sym_simple_expression,
    STATE(21), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(49), 2,
      sym_function_application,
      sym_binary_operation,
  [337] = 6,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_constructor,
    ACTIONS(63), 1,
      aux_sym_argument_token1,
    STATE(54), 1,
      sym_simple_expression,
    STATE(21), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(49), 2,
      sym_function_application,
      sym_binary_operation,
  [358] = 6,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_constructor,
    ACTIONS(63), 1,
      aux_sym_argument_token1,
    STATE(56), 1,
      sym_simple_expression,
    STATE(21), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(49), 2,
      sym_function_application,
      sym_binary_operation,
  [379] = 4,
    ACTIONS(17), 1,
      anon_sym_in,
    ACTIONS(65), 1,
      aux_sym_argument_token1,
    STATE(20), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(15), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [396] = 4,
    ACTIONS(24), 1,
      anon_sym_in,
    ACTIONS(68), 1,
      aux_sym_argument_token1,
    STATE(20), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(22), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [413] = 6,
    ACTIONS(57), 1,
      aux_sym_argument_token1,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_constructor,
    STATE(59), 1,
      sym_simple_expression,
    STATE(26), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(49), 2,
      sym_function_application,
      sym_binary_operation,
  [434] = 1,
    ACTIONS(70), 8,
      anon_sym_EQ,
      anon_sym_COLON,
      aux_sym_argument_token1,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [445] = 6,
    ACTIONS(57), 1,
      aux_sym_argument_token1,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_constructor,
    STATE(60), 1,
      sym_simple_expression,
    STATE(26), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(49), 2,
      sym_function_application,
      sym_binary_operation,
  [466] = 4,
    ACTIONS(17), 1,
      anon_sym_of,
    ACTIONS(72), 1,
      aux_sym_argument_token1,
    STATE(25), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(15), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [483] = 4,
    ACTIONS(24), 1,
      anon_sym_of,
    ACTIONS(75), 1,
      aux_sym_argument_token1,
    STATE(25), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(22), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [500] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(55), 1,
      aux_sym_argument_token1,
    STATE(8), 1,
      sym_simple_expression,
    STATE(6), 2,
      sym_function_application,
      sym_binary_operation,
    STATE(33), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [521] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(55), 1,
      aux_sym_argument_token1,
    STATE(72), 1,
      sym_simple_expression,
    STATE(6), 2,
      sym_function_application,
      sym_binary_operation,
    STATE(33), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [542] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(55), 1,
      aux_sym_argument_token1,
    STATE(67), 1,
      sym_simple_expression,
    STATE(6), 2,
      sym_function_application,
      sym_binary_operation,
    STATE(33), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [563] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(77), 1,
      aux_sym_argument_token1,
    STATE(8), 1,
      sym_simple_expression,
    STATE(5), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(6), 2,
      sym_function_application,
      sym_binary_operation,
  [584] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(55), 1,
      aux_sym_argument_token1,
    STATE(68), 1,
      sym_simple_expression,
    STATE(6), 2,
      sym_function_application,
      sym_binary_operation,
    STATE(33), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [605] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(77), 1,
      aux_sym_argument_token1,
    STATE(40), 1,
      sym_simple_expression,
    STATE(5), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(6), 2,
      sym_function_application,
      sym_binary_operation,
  [626] = 3,
    ACTIONS(55), 1,
      aux_sym_argument_token1,
    STATE(11), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    ACTIONS(22), 5,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [641] = 2,
    ACTIONS(79), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [654] = 6,
    ACTIONS(85), 1,
      anon_sym_PLUS,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(83), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [675] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(77), 1,
      aux_sym_argument_token1,
    STATE(35), 1,
      sym_simple_expression,
    STATE(5), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(6), 2,
      sym_function_application,
      sym_binary_operation,
  [696] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(77), 1,
      aux_sym_argument_token1,
    STATE(39), 1,
      sym_simple_expression,
    STATE(5), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(6), 2,
      sym_function_application,
      sym_binary_operation,
  [717] = 6,
    ACTIONS(57), 1,
      aux_sym_argument_token1,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_constructor,
    STATE(52), 1,
      sym_simple_expression,
    STATE(26), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(49), 2,
      sym_function_application,
      sym_binary_operation,
  [738] = 4,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_SLASH,
    ACTIONS(36), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [755] = 3,
    ACTIONS(91), 1,
      anon_sym_SLASH,
    ACTIONS(36), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    ACTIONS(34), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [770] = 6,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_constructor,
    ACTIONS(63), 1,
      aux_sym_argument_token1,
    STATE(61), 1,
      sym_simple_expression,
    STATE(21), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(49), 2,
      sym_function_application,
      sym_binary_operation,
  [791] = 6,
    ACTIONS(57), 1,
      aux_sym_argument_token1,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_constructor,
    STATE(57), 1,
      sym_simple_expression,
    STATE(26), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(49), 2,
      sym_function_application,
      sym_binary_operation,
  [812] = 5,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_SLASH,
    ACTIONS(36), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
  [831] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_constructor,
    ACTIONS(77), 1,
      aux_sym_argument_token1,
    STATE(43), 1,
      sym_simple_expression,
    STATE(5), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
    STATE(6), 2,
      sym_function_application,
      sym_binary_operation,
  [852] = 6,
    ACTIONS(85), 1,
      anon_sym_PLUS,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_SLASH,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [872] = 6,
    ACTIONS(85), 1,
      anon_sym_PLUS,
    ACTIONS(87), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_SLASH,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [892] = 1,
    ACTIONS(38), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [901] = 2,
    ACTIONS(79), 2,
      aux_sym_argument_token1,
      anon_sym_in,
    ACTIONS(70), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [912] = 1,
    ACTIONS(26), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [921] = 4,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_PIPE,
    ACTIONS(103), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    STATE(50), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [936] = 4,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(110), 2,
      anon_sym_type,
      aux_sym_argument_token1,
    STATE(50), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [951] = 1,
    ACTIONS(34), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [960] = 2,
    ACTIONS(79), 2,
      aux_sym_argument_token1,
      anon_sym_of,
    ACTIONS(70), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [971] = 3,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    ACTIONS(34), 3,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
  [983] = 4,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(120), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [997] = 4,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(34), 2,
      anon_sym_in,
      anon_sym_PLUS,
  [1011] = 2,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    ACTIONS(34), 4,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [1021] = 4,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(130), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1035] = 3,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(34), 3,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1047] = 4,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(34), 2,
      anon_sym_of,
      anon_sym_PLUS,
  [1061] = 5,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    ACTIONS(124), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      anon_sym_in,
    ACTIONS(141), 1,
      anon_sym_PLUS,
  [1077] = 4,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    STATE(63), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(145), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1091] = 4,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(151), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1105] = 2,
    ACTIONS(116), 1,
      anon_sym_SLASH,
    ACTIONS(34), 4,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [1115] = 2,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(34), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [1125] = 5,
    ACTIONS(126), 1,
      anon_sym_SLASH,
    ACTIONS(135), 1,
      anon_sym_STAR,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(155), 1,
      anon_sym_of,
    ACTIONS(157), 1,
      anon_sym_PLUS,
  [1141] = 3,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(34), 3,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1153] = 4,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_DASH,
    ACTIONS(34), 2,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [1167] = 4,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(165), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1181] = 4,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      anon_sym_PIPE,
    STATE(70), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(169), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1195] = 5,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_DASH,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    ACTIONS(176), 1,
      anon_sym_PLUS,
  [1211] = 5,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_PLUS,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
  [1227] = 3,
    ACTIONS(55), 1,
      aux_sym_argument_token1,
    ACTIONS(180), 1,
      anon_sym_EQ,
    STATE(11), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [1238] = 3,
    ACTIONS(182), 1,
      anon_sym_EQ,
    ACTIONS(184), 1,
      aux_sym_argument_token1,
    STATE(74), 2,
      sym_argument,
      aux_sym_function_head_repeat1,
  [1249] = 4,
    ACTIONS(55), 1,
      aux_sym_argument_token1,
    STATE(88), 1,
      sym_record_member,
    STATE(105), 1,
      sym_identifier,
    STATE(114), 1,
      sym_record_body,
  [1262] = 2,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(130), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1271] = 3,
    ACTIONS(187), 1,
      anon_sym_EQ,
    ACTIONS(189), 1,
      aux_sym_argument_token1,
    STATE(74), 2,
      sym_argument,
      aux_sym_function_head_repeat1,
  [1282] = 3,
    ACTIONS(55), 1,
      aux_sym_argument_token1,
    ACTIONS(191), 1,
      anon_sym_EQ,
    STATE(73), 2,
      sym_identifier,
      aux_sym_datatype_head_repeat1,
  [1293] = 3,
    ACTIONS(189), 1,
      aux_sym_argument_token1,
    ACTIONS(193), 1,
      anon_sym_EQ,
    STATE(77), 2,
      sym_argument,
      aux_sym_function_head_repeat1,
  [1304] = 2,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(169), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1313] = 2,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1321] = 3,
    ACTIONS(55), 1,
      aux_sym_argument_token1,
    STATE(100), 1,
      sym_record_member,
    STATE(105), 1,
      sym_identifier,
  [1331] = 2,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1339] = 3,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_record_body_repeat1,
  [1349] = 2,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1357] = 2,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1365] = 2,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1373] = 3,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_record_body_repeat1,
  [1383] = 3,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      sym_constructor,
    STATE(81), 1,
      sym_sumtype_body,
  [1393] = 3,
    ACTIONS(221), 1,
      sym_constructor,
    STATE(80), 1,
      sym_alternative,
    STATE(113), 1,
      sym_pattern,
  [1403] = 2,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1411] = 3,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_record_body_repeat1,
  [1421] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1429] = 3,
    ACTIONS(221), 1,
      sym_constructor,
    STATE(69), 1,
      sym_alternative,
    STATE(113), 1,
      sym_pattern,
  [1439] = 2,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    STATE(51), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [1447] = 2,
    ACTIONS(55), 1,
      aux_sym_argument_token1,
    STATE(110), 1,
      sym_identifier,
  [1454] = 1,
    ACTIONS(232), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1459] = 1,
    ACTIONS(234), 2,
      anon_sym_type,
      aux_sym_argument_token1,
  [1464] = 1,
    ACTIONS(236), 2,
      anon_sym_EQ,
      aux_sym_argument_token1,
  [1469] = 1,
    ACTIONS(227), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1474] = 1,
    ACTIONS(238), 2,
      anon_sym_EQ,
      aux_sym_argument_token1,
  [1479] = 1,
    ACTIONS(240), 1,
      anon_sym_where,
  [1483] = 1,
    ACTIONS(242), 1,
      sym_module_name,
  [1487] = 1,
    ACTIONS(244), 1,
      sym_constructor,
  [1491] = 1,
    ACTIONS(246), 1,
      anon_sym_COLON,
  [1495] = 1,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
  [1499] = 1,
    ACTIONS(250), 1,
      anon_sym_EQ,
  [1503] = 1,
    ACTIONS(252), 1,
      sym_constructor,
  [1507] = 1,
    ACTIONS(254), 1,
      anon_sym_DASH_GT,
  [1511] = 1,
    ACTIONS(256), 1,
      anon_sym_EQ,
  [1515] = 1,
    ACTIONS(258), 1,
      sym_constructor,
  [1519] = 1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
  [1523] = 1,
    ACTIONS(262), 1,
      anon_sym_DASH_GT,
  [1527] = 1,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
  [1531] = 1,
    ACTIONS(266), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 168,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 208,
  [SMALL_STATE(13)] = 232,
  [SMALL_STATE(14)] = 253,
  [SMALL_STATE(15)] = 274,
  [SMALL_STATE(16)] = 295,
  [SMALL_STATE(17)] = 316,
  [SMALL_STATE(18)] = 337,
  [SMALL_STATE(19)] = 358,
  [SMALL_STATE(20)] = 379,
  [SMALL_STATE(21)] = 396,
  [SMALL_STATE(22)] = 413,
  [SMALL_STATE(23)] = 434,
  [SMALL_STATE(24)] = 445,
  [SMALL_STATE(25)] = 466,
  [SMALL_STATE(26)] = 483,
  [SMALL_STATE(27)] = 500,
  [SMALL_STATE(28)] = 521,
  [SMALL_STATE(29)] = 542,
  [SMALL_STATE(30)] = 563,
  [SMALL_STATE(31)] = 584,
  [SMALL_STATE(32)] = 605,
  [SMALL_STATE(33)] = 626,
  [SMALL_STATE(34)] = 641,
  [SMALL_STATE(35)] = 654,
  [SMALL_STATE(36)] = 675,
  [SMALL_STATE(37)] = 696,
  [SMALL_STATE(38)] = 717,
  [SMALL_STATE(39)] = 738,
  [SMALL_STATE(40)] = 755,
  [SMALL_STATE(41)] = 770,
  [SMALL_STATE(42)] = 791,
  [SMALL_STATE(43)] = 812,
  [SMALL_STATE(44)] = 831,
  [SMALL_STATE(45)] = 852,
  [SMALL_STATE(46)] = 872,
  [SMALL_STATE(47)] = 892,
  [SMALL_STATE(48)] = 901,
  [SMALL_STATE(49)] = 912,
  [SMALL_STATE(50)] = 921,
  [SMALL_STATE(51)] = 936,
  [SMALL_STATE(52)] = 951,
  [SMALL_STATE(53)] = 960,
  [SMALL_STATE(54)] = 971,
  [SMALL_STATE(55)] = 983,
  [SMALL_STATE(56)] = 997,
  [SMALL_STATE(57)] = 1011,
  [SMALL_STATE(58)] = 1021,
  [SMALL_STATE(59)] = 1035,
  [SMALL_STATE(60)] = 1047,
  [SMALL_STATE(61)] = 1061,
  [SMALL_STATE(62)] = 1077,
  [SMALL_STATE(63)] = 1091,
  [SMALL_STATE(64)] = 1105,
  [SMALL_STATE(65)] = 1115,
  [SMALL_STATE(66)] = 1125,
  [SMALL_STATE(67)] = 1141,
  [SMALL_STATE(68)] = 1153,
  [SMALL_STATE(69)] = 1167,
  [SMALL_STATE(70)] = 1181,
  [SMALL_STATE(71)] = 1195,
  [SMALL_STATE(72)] = 1211,
  [SMALL_STATE(73)] = 1227,
  [SMALL_STATE(74)] = 1238,
  [SMALL_STATE(75)] = 1249,
  [SMALL_STATE(76)] = 1262,
  [SMALL_STATE(77)] = 1271,
  [SMALL_STATE(78)] = 1282,
  [SMALL_STATE(79)] = 1293,
  [SMALL_STATE(80)] = 1304,
  [SMALL_STATE(81)] = 1313,
  [SMALL_STATE(82)] = 1321,
  [SMALL_STATE(83)] = 1331,
  [SMALL_STATE(84)] = 1339,
  [SMALL_STATE(85)] = 1349,
  [SMALL_STATE(86)] = 1357,
  [SMALL_STATE(87)] = 1365,
  [SMALL_STATE(88)] = 1373,
  [SMALL_STATE(89)] = 1383,
  [SMALL_STATE(90)] = 1393,
  [SMALL_STATE(91)] = 1403,
  [SMALL_STATE(92)] = 1411,
  [SMALL_STATE(93)] = 1421,
  [SMALL_STATE(94)] = 1429,
  [SMALL_STATE(95)] = 1439,
  [SMALL_STATE(96)] = 1447,
  [SMALL_STATE(97)] = 1454,
  [SMALL_STATE(98)] = 1459,
  [SMALL_STATE(99)] = 1464,
  [SMALL_STATE(100)] = 1469,
  [SMALL_STATE(101)] = 1474,
  [SMALL_STATE(102)] = 1479,
  [SMALL_STATE(103)] = 1483,
  [SMALL_STATE(104)] = 1487,
  [SMALL_STATE(105)] = 1491,
  [SMALL_STATE(106)] = 1495,
  [SMALL_STATE(107)] = 1499,
  [SMALL_STATE(108)] = 1503,
  [SMALL_STATE(109)] = 1507,
  [SMALL_STATE(110)] = 1511,
  [SMALL_STATE(111)] = 1515,
  [SMALL_STATE(112)] = 1519,
  [SMALL_STATE(113)] = 1523,
  [SMALL_STATE(114)] = 1527,
  [SMALL_STATE(115)] = 1531,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_datatype_head_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datatype_head_repeat1, 2), SHIFT_REPEAT(34),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_application, 1),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_application, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(108),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(101),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2), SHIFT_REPEAT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declarations, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datatype_head_repeat1, 2), SHIFT_REPEAT(48),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datatype_head_repeat1, 2), SHIFT_REPEAT(53),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3, .production_id = 7),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative, 3, .production_id = 7),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2), SHIFT_REPEAT(94),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, .production_id = 5),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 4, .production_id = 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sumtype_body_repeat1, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sumtype_body_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sumtype_body_repeat1, 2), SHIFT_REPEAT(104),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sumtype_body, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sumtype_body, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sumtype_body, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sumtype_body, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(90),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 3, .production_id = 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_head_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_head_repeat1, 2), SHIFT_REPEAT(99),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_head, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 2, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_head, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 5, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 5, .production_id = 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 6, .production_id = 6),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 6, .production_id = 6),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2), SHIFT_REPEAT(82),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_member, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [260] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
