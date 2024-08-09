#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  anon_sym_module = 1,
  anon_sym_where = 2,
  sym_module_name = 3,
  anon_sym_import = 4,
  anon_sym_EQ = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_type = 8,
  anon_sym_PIPE = 9,
  anon_sym_COMMA = 10,
  anon_sym_COLON = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_let = 14,
  anon_sym_in = 15,
  anon_sym_case = 16,
  anon_sym_of = 17,
  anon_sym_if = 18,
  anon_sym_then = 19,
  anon_sym_else = 20,
  anon_sym_DASH_GT = 21,
  sym_identifier = 22,
  sym_constructor = 23,
  sym_string = 24,
  anon_sym_PLUS = 25,
  anon_sym_DASH = 26,
  anon_sym_STAR = 27,
  anon_sym_SLASH = 28,
  anon_sym_EQ_EQ = 29,
  anon_sym_BANG_EQ = 30,
  anon_sym_LT = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT_EQ = 34,
  sym_source_file = 35,
  sym_module_declaration = 36,
  sym_top_level_declarations = 37,
  sym_import_declaration = 38,
  sym_datatype_declaration = 39,
  sym_datatype_head = 40,
  sym_sumtype_body = 41,
  sym_record_body = 42,
  sym_record_member = 43,
  sym_function_declaration = 44,
  sym_function_head = 45,
  sym_function_body = 46,
  sym_simple_expression = 47,
  sym_let_binding_body = 48,
  sym_let_binding = 49,
  sym_case_expression = 50,
  sym_if_then_else = 51,
  sym_alternatives = 52,
  sym_alternative = 53,
  sym_pattern = 54,
  sym_binary_operation = 55,
  aux_sym_top_level_declarations_repeat1 = 56,
  aux_sym_datatype_head_repeat1 = 57,
  aux_sym_sumtype_body_repeat1 = 58,
  aux_sym_record_body_repeat1 = 59,
  aux_sym_case_expression_repeat1 = 60,
  aux_sym_alternatives_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [sym_module_name] = "module_name",
  [anon_sym_import] = "import",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_type] = "type",
  [anon_sym_PIPE] = "|",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_case] = "case",
  [anon_sym_of] = "of",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_DASH_GT] = "->",
  [sym_identifier] = "identifier",
  [sym_constructor] = "constructor",
  [sym_string] = "string",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [sym_source_file] = "source_file",
  [sym_module_declaration] = "module_declaration",
  [sym_top_level_declarations] = "top_level_declarations",
  [sym_import_declaration] = "import_declaration",
  [sym_datatype_declaration] = "datatype_declaration",
  [sym_datatype_head] = "datatype_head",
  [sym_sumtype_body] = "sumtype_body",
  [sym_record_body] = "record_body",
  [sym_record_member] = "record_member",
  [sym_function_declaration] = "function_declaration",
  [sym_function_head] = "function_head",
  [sym_function_body] = "function_body",
  [sym_simple_expression] = "simple_expression",
  [sym_let_binding_body] = "let_binding_body",
  [sym_let_binding] = "let_binding",
  [sym_case_expression] = "case_expression",
  [sym_if_then_else] = "if_then_else",
  [sym_alternatives] = "alternatives",
  [sym_alternative] = "alternative",
  [sym_pattern] = "pattern",
  [sym_binary_operation] = "binary_operation",
  [aux_sym_top_level_declarations_repeat1] = "top_level_declarations_repeat1",
  [aux_sym_datatype_head_repeat1] = "datatype_head_repeat1",
  [aux_sym_sumtype_body_repeat1] = "sumtype_body_repeat1",
  [aux_sym_record_body_repeat1] = "record_body_repeat1",
  [aux_sym_case_expression_repeat1] = "case_expression_repeat1",
  [aux_sym_alternatives_repeat1] = "alternatives_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_where] = anon_sym_where,
  [sym_module_name] = sym_module_name,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_identifier] = sym_identifier,
  [sym_constructor] = sym_constructor,
  [sym_string] = sym_string,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [sym_source_file] = sym_source_file,
  [sym_module_declaration] = sym_module_declaration,
  [sym_top_level_declarations] = sym_top_level_declarations,
  [sym_import_declaration] = sym_import_declaration,
  [sym_datatype_declaration] = sym_datatype_declaration,
  [sym_datatype_head] = sym_datatype_head,
  [sym_sumtype_body] = sym_sumtype_body,
  [sym_record_body] = sym_record_body,
  [sym_record_member] = sym_record_member,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_head] = sym_function_head,
  [sym_function_body] = sym_function_body,
  [sym_simple_expression] = sym_simple_expression,
  [sym_let_binding_body] = sym_let_binding_body,
  [sym_let_binding] = sym_let_binding,
  [sym_case_expression] = sym_case_expression,
  [sym_if_then_else] = sym_if_then_else,
  [sym_alternatives] = sym_alternatives,
  [sym_alternative] = sym_alternative,
  [sym_pattern] = sym_pattern,
  [sym_binary_operation] = sym_binary_operation,
  [aux_sym_top_level_declarations_repeat1] = aux_sym_top_level_declarations_repeat1,
  [aux_sym_datatype_head_repeat1] = aux_sym_datatype_head_repeat1,
  [aux_sym_sumtype_body_repeat1] = aux_sym_sumtype_body_repeat1,
  [aux_sym_record_body_repeat1] = aux_sym_record_body_repeat1,
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
  [anon_sym_import] = {
    .visible = true,
    .named = false,
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [sym_import_declaration] = {
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
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_let_binding_body] = {
    .visible = true,
    .named = true,
  },
  [sym_let_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_case_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_then_else] = {
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
  [aux_sym_case_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alternatives_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alternatives = 1,
  field_binding_body = 2,
  field_binding_name = 3,
  field_binding_value = 4,
  field_body = 5,
  field_case_expression = 6,
  field_condition = 7,
  field_conditional = 8,
  field_false_branch = 9,
  field_head = 10,
  field_module = 11,
  field_name = 12,
  field_pattern = 13,
  field_rhs = 14,
  field_true_branch = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternatives] = "alternatives",
  [field_binding_body] = "binding_body",
  [field_binding_name] = "binding_name",
  [field_binding_value] = "binding_value",
  [field_body] = "body",
  [field_case_expression] = "case_expression",
  [field_condition] = "condition",
  [field_conditional] = "conditional",
  [field_false_branch] = "false_branch",
  [field_head] = "head",
  [field_module] = "module",
  [field_name] = "name",
  [field_pattern] = "pattern",
  [field_rhs] = "rhs",
  [field_true_branch] = "true_branch",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_module, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_body, 2},
    {field_head, 0},
  [4] =
    {field_case_expression, 0},
  [5] =
    {field_head, 0},
  [6] =
    {field_alternatives, 3},
    {field_conditional, 1},
  [8] =
    {field_binding_body, 5},
    {field_binding_name, 1},
    {field_binding_value, 3},
  [11] =
    {field_condition, 1},
    {field_false_branch, 5},
    {field_true_branch, 3},
  [14] =
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
  [9] = 3,
  [10] = 5,
  [11] = 11,
  [12] = 6,
  [13] = 7,
  [14] = 14,
  [15] = 4,
  [16] = 16,
  [17] = 2,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 23,
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
  [39] = 34,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 31,
  [44] = 44,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 44,
  [49] = 49,
  [50] = 32,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '!', 6,
        '"', 5,
        '(', 58,
        ')', 59,
        '*', 91,
        '+', 88,
        ',', 56,
        '-', 90,
        '/', 92,
        ':', 57,
        '<', 95,
        '=', 50,
        '>', 96,
        'c', 9,
        'e', 25,
        'i', 19,
        'l', 11,
        'm', 28,
        'o', 20,
        't', 22,
        'w', 23,
        '{', 51,
        '|', 55,
        '}', 52,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 6,
        '*', 91,
        '+', 88,
        '-', 89,
        '/', 92,
        '<', 95,
        '=', 7,
        '>', 96,
        'e', 25,
        'i', 26,
        'o', 20,
        't', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == '=') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 39:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 40:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '!', 6,
        ')', 59,
        '*', 91,
        '+', 88,
        '-', 89,
        '/', 92,
        '<', 95,
        '=', 7,
        '>', 96,
        'i', 76,
        't', 84,
        '|', 55,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 42},
  [4] = {.lex_state = 42},
  [5] = {.lex_state = 42},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 42},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 42},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 42},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 42},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 42},
  [30] = {.lex_state = 42},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 42},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 42},
  [38] = {.lex_state = 42},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 42},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 42},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 42},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 42},
  [54] = {.lex_state = 42},
  [55] = {.lex_state = 42},
  [56] = {.lex_state = 42},
  [57] = {.lex_state = 42},
  [58] = {.lex_state = 42},
  [59] = {.lex_state = 42},
  [60] = {.lex_state = 42},
  [61] = {.lex_state = 42},
  [62] = {.lex_state = 42},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 42},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 39},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 39},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_constructor] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(94),
    [sym_module_declaration] = STATE(26),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(7), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
    ACTIONS(9), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(5), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [25] = 5,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(7), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
    ACTIONS(5), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(9), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [52] = 2,
    ACTIONS(17), 5,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [73] = 2,
    ACTIONS(7), 5,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(5), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [94] = 6,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(7), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
    ACTIONS(5), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
    ACTIONS(9), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [123] = 2,
    ACTIONS(23), 5,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [144] = 7,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(27), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
    ACTIONS(9), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [174] = 4,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(5), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      anon_sym_PLUS,
      anon_sym_DASH,
  [197] = 2,
    ACTIONS(7), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(5), 12,
      anon_sym_in,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [216] = 7,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
    ACTIONS(9), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [245] = 5,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(5), 5,
      anon_sym_in,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      anon_sym_PLUS,
    ACTIONS(33), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [270] = 2,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 12,
      anon_sym_in,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [289] = 7,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
    ACTIONS(9), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [318] = 2,
    ACTIONS(17), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 12,
      anon_sym_in,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [337] = 7,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
    ACTIONS(9), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [366] = 3,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(5), 7,
      anon_sym_in,
      anon_sym_of,
      anon_sym_then,
      anon_sym_else,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [387] = 11,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_case,
    ACTIONS(57), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(4), 1,
      sym_binary_operation,
    STATE(11), 1,
      sym_simple_expression,
    STATE(56), 1,
      sym_case_expression,
    STATE(59), 1,
      sym_function_body,
    ACTIONS(61), 2,
      sym_constructor,
      sym_string,
    STATE(62), 2,
      sym_let_binding,
      sym_if_then_else,
  [423] = 6,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_then,
    ACTIONS(65), 1,
      anon_sym_PLUS,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [447] = 8,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_import,
    ACTIONS(72), 1,
      anon_sym_type,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(65), 1,
      aux_sym_datatype_head_repeat1,
    STATE(88), 1,
      sym_function_head,
    STATE(89), 1,
      sym_datatype_head,
    STATE(20), 4,
      sym_import_declaration,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [475] = 6,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_PLUS,
    ACTIONS(78), 1,
      anon_sym_of,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [499] = 6,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_PLUS,
    ACTIONS(80), 1,
      anon_sym_in,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [523] = 6,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [547] = 6,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_PLUS,
    ACTIONS(84), 1,
      anon_sym_else,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [571] = 9,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_let,
    ACTIONS(57), 1,
      anon_sym_if,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(4), 1,
      sym_binary_operation,
    STATE(14), 1,
      sym_simple_expression,
    STATE(61), 1,
      sym_let_binding_body,
    ACTIONS(61), 2,
      sym_constructor,
      sym_string,
    STATE(60), 2,
      sym_let_binding,
      sym_if_then_else,
  [601] = 8,
    ACTIONS(86), 1,
      anon_sym_import,
    ACTIONS(88), 1,
      anon_sym_type,
    ACTIONS(90), 1,
      sym_identifier,
    STATE(65), 1,
      aux_sym_datatype_head_repeat1,
    STATE(88), 1,
      sym_function_head,
    STATE(89), 1,
      sym_datatype_head,
    STATE(90), 1,
      sym_top_level_declarations,
    STATE(28), 4,
      sym_import_declaration,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [629] = 6,
    ACTIONS(13), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 5,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [653] = 8,
    ACTIONS(86), 1,
      anon_sym_import,
    ACTIONS(88), 1,
      anon_sym_type,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      aux_sym_datatype_head_repeat1,
    STATE(88), 1,
      sym_function_head,
    STATE(89), 1,
      sym_datatype_head,
    STATE(20), 4,
      sym_import_declaration,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [681] = 4,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      anon_sym_PIPE,
    STATE(29), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
    ACTIONS(98), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [697] = 4,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      anon_sym_PIPE,
    STATE(29), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
    ACTIONS(105), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [713] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_simple_expression,
    STATE(15), 1,
      sym_binary_operation,
    ACTIONS(111), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [728] = 4,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_binary_operation,
    STATE(6), 1,
      sym_simple_expression,
    ACTIONS(61), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [743] = 4,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    STATE(38), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(115), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [758] = 4,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_binary_operation,
    STATE(27), 1,
      sym_simple_expression,
    ACTIONS(61), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [773] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_binary_operation,
    STATE(19), 1,
      sym_simple_expression,
    ACTIONS(111), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [788] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_binary_operation,
    STATE(21), 1,
      sym_simple_expression,
    ACTIONS(111), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [803] = 4,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(121), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [818] = 4,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(127), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [833] = 4,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_binary_operation,
    STATE(23), 1,
      sym_simple_expression,
    ACTIONS(61), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [848] = 4,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_binary_operation,
    STATE(8), 1,
      sym_simple_expression,
    ACTIONS(61), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [863] = 4,
    ACTIONS(123), 1,
      anon_sym_PIPE,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(131), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [878] = 4,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_binary_operation,
    STATE(16), 1,
      sym_simple_expression,
    ACTIONS(61), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [893] = 4,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_simple_expression,
    STATE(4), 1,
      sym_binary_operation,
    ACTIONS(61), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [908] = 4,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_simple_expression,
    STATE(4), 1,
      sym_binary_operation,
    ACTIONS(61), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [923] = 4,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_binary_operation,
    STATE(5), 1,
      sym_simple_expression,
    ACTIONS(61), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [938] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_simple_expression,
    STATE(15), 1,
      sym_binary_operation,
    ACTIONS(111), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [953] = 4,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      anon_sym_PIPE,
    STATE(47), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(135), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [968] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_binary_operation,
    STATE(17), 1,
      sym_simple_expression,
    ACTIONS(111), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [983] = 4,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(142), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [998] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_simple_expression,
    STATE(15), 1,
      sym_binary_operation,
    ACTIONS(111), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [1013] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_binary_operation,
    STATE(22), 1,
      sym_simple_expression,
    ACTIONS(111), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [1028] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_binary_operation,
    STATE(24), 1,
      sym_simple_expression,
    ACTIONS(111), 3,
      sym_identifier,
      sym_constructor,
      sym_string,
  [1043] = 2,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(142), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [1053] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(135), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [1063] = 2,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [1072] = 2,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [1081] = 2,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [1090] = 2,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [1099] = 2,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [1108] = 2,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [1117] = 2,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [1126] = 2,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [1135] = 3,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      sym_constructor,
    STATE(58), 1,
      sym_sumtype_body,
  [1145] = 3,
    ACTIONS(175), 1,
      anon_sym_EQ,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(72), 1,
      aux_sym_datatype_head_repeat1,
  [1155] = 3,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_EQ,
    STATE(72), 1,
      aux_sym_datatype_head_repeat1,
  [1165] = 1,
    ACTIONS(181), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [1171] = 3,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_record_body_repeat1,
  [1181] = 3,
    ACTIONS(187), 1,
      anon_sym_EQ,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym_datatype_head_repeat1,
  [1191] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_record_body_repeat1,
  [1201] = 3,
    ACTIONS(193), 1,
      sym_constructor,
    STATE(33), 1,
      sym_alternative,
    STATE(84), 1,
      sym_pattern,
  [1211] = 2,
    ACTIONS(107), 1,
      anon_sym_PIPE,
    STATE(30), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [1219] = 3,
    ACTIONS(195), 1,
      anon_sym_EQ,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(72), 1,
      aux_sym_datatype_head_repeat1,
  [1229] = 3,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_record_body_repeat1,
  [1239] = 3,
    ACTIONS(193), 1,
      sym_constructor,
    STATE(54), 1,
      sym_alternative,
    STATE(84), 1,
      sym_pattern,
  [1249] = 3,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(67), 1,
      sym_record_member,
    STATE(85), 1,
      sym_record_body,
  [1259] = 2,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(77), 1,
      sym_record_member,
  [1266] = 1,
    ACTIONS(200), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1271] = 1,
    ACTIONS(207), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [1276] = 1,
    ACTIONS(209), 1,
      anon_sym_COLON,
  [1280] = 1,
    ACTIONS(211), 1,
      sym_identifier,
  [1284] = 1,
    ACTIONS(213), 1,
      sym_module_name,
  [1288] = 1,
    ACTIONS(215), 1,
      anon_sym_EQ,
  [1292] = 1,
    ACTIONS(217), 1,
      sym_constructor,
  [1296] = 1,
    ACTIONS(219), 1,
      anon_sym_DASH_GT,
  [1300] = 1,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
  [1304] = 1,
    ACTIONS(223), 1,
      anon_sym_DASH_GT,
  [1308] = 1,
    ACTIONS(225), 1,
      sym_constructor,
  [1312] = 1,
    ACTIONS(227), 1,
      anon_sym_EQ,
  [1316] = 1,
    ACTIONS(229), 1,
      anon_sym_EQ,
  [1320] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [1324] = 1,
    ACTIONS(233), 1,
      sym_constructor,
  [1328] = 1,
    ACTIONS(235), 1,
      sym_module_name,
  [1332] = 1,
    ACTIONS(237), 1,
      anon_sym_where,
  [1336] = 1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 174,
  [SMALL_STATE(10)] = 197,
  [SMALL_STATE(11)] = 216,
  [SMALL_STATE(12)] = 245,
  [SMALL_STATE(13)] = 270,
  [SMALL_STATE(14)] = 289,
  [SMALL_STATE(15)] = 318,
  [SMALL_STATE(16)] = 337,
  [SMALL_STATE(17)] = 366,
  [SMALL_STATE(18)] = 387,
  [SMALL_STATE(19)] = 423,
  [SMALL_STATE(20)] = 447,
  [SMALL_STATE(21)] = 475,
  [SMALL_STATE(22)] = 499,
  [SMALL_STATE(23)] = 523,
  [SMALL_STATE(24)] = 547,
  [SMALL_STATE(25)] = 571,
  [SMALL_STATE(26)] = 601,
  [SMALL_STATE(27)] = 629,
  [SMALL_STATE(28)] = 653,
  [SMALL_STATE(29)] = 681,
  [SMALL_STATE(30)] = 697,
  [SMALL_STATE(31)] = 713,
  [SMALL_STATE(32)] = 728,
  [SMALL_STATE(33)] = 743,
  [SMALL_STATE(34)] = 758,
  [SMALL_STATE(35)] = 773,
  [SMALL_STATE(36)] = 788,
  [SMALL_STATE(37)] = 803,
  [SMALL_STATE(38)] = 818,
  [SMALL_STATE(39)] = 833,
  [SMALL_STATE(40)] = 848,
  [SMALL_STATE(41)] = 863,
  [SMALL_STATE(42)] = 878,
  [SMALL_STATE(43)] = 893,
  [SMALL_STATE(44)] = 908,
  [SMALL_STATE(45)] = 923,
  [SMALL_STATE(46)] = 938,
  [SMALL_STATE(47)] = 953,
  [SMALL_STATE(48)] = 968,
  [SMALL_STATE(49)] = 983,
  [SMALL_STATE(50)] = 998,
  [SMALL_STATE(51)] = 1013,
  [SMALL_STATE(52)] = 1028,
  [SMALL_STATE(53)] = 1043,
  [SMALL_STATE(54)] = 1053,
  [SMALL_STATE(55)] = 1063,
  [SMALL_STATE(56)] = 1072,
  [SMALL_STATE(57)] = 1081,
  [SMALL_STATE(58)] = 1090,
  [SMALL_STATE(59)] = 1099,
  [SMALL_STATE(60)] = 1108,
  [SMALL_STATE(61)] = 1117,
  [SMALL_STATE(62)] = 1126,
  [SMALL_STATE(63)] = 1135,
  [SMALL_STATE(64)] = 1145,
  [SMALL_STATE(65)] = 1155,
  [SMALL_STATE(66)] = 1165,
  [SMALL_STATE(67)] = 1171,
  [SMALL_STATE(68)] = 1181,
  [SMALL_STATE(69)] = 1191,
  [SMALL_STATE(70)] = 1201,
  [SMALL_STATE(71)] = 1211,
  [SMALL_STATE(72)] = 1219,
  [SMALL_STATE(73)] = 1229,
  [SMALL_STATE(74)] = 1239,
  [SMALL_STATE(75)] = 1249,
  [SMALL_STATE(76)] = 1259,
  [SMALL_STATE(77)] = 1266,
  [SMALL_STATE(78)] = 1271,
  [SMALL_STATE(79)] = 1276,
  [SMALL_STATE(80)] = 1280,
  [SMALL_STATE(81)] = 1284,
  [SMALL_STATE(82)] = 1288,
  [SMALL_STATE(83)] = 1292,
  [SMALL_STATE(84)] = 1296,
  [SMALL_STATE(85)] = 1300,
  [SMALL_STATE(86)] = 1304,
  [SMALL_STATE(87)] = 1308,
  [SMALL_STATE(88)] = 1312,
  [SMALL_STATE(89)] = 1316,
  [SMALL_STATE(90)] = 1320,
  [SMALL_STATE(91)] = 1324,
  [SMALL_STATE(92)] = 1328,
  [SMALL_STATE(93)] = 1332,
  [SMALL_STATE(94)] = 1336,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 3, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3, 0, 9),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative, 3, 0, 9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_then_else, 6, 0, 8),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_then_else, 6, 0, 8),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declarations, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, 0, 6),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 4, 0, 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sumtype_body, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sumtype_body, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sumtype_body, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sumtype_body, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sumtype_body_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sumtype_body_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sumtype_body_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 5, 0, 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 5, 0, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, 0, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1, 0, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, 0, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 2, 0, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 3, 0, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 3, 0, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, 0, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, 0, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 6, 0, 7),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 6, 0, 7),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 3, 0, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_head, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 2, 0, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_member, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [239] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_boreal(void) {
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
