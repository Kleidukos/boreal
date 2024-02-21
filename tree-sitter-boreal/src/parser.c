#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
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
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_let = 13,
  anon_sym_in = 14,
  anon_sym_case = 15,
  anon_sym_of = 16,
  anon_sym_DASH_GT = 17,
  sym_identifier = 18,
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
  sym_function_body = 34,
  sym_simple_expression = 35,
  sym_let_binding_body = 36,
  sym_let_binding = 37,
  sym_case_expression = 38,
  sym_alternatives = 39,
  sym_alternative = 40,
  sym_pattern = 41,
  sym_binary_operation = 42,
  aux_sym_top_level_declarations_repeat1 = 43,
  aux_sym_datatype_head_repeat1 = 44,
  aux_sym_sumtype_body_repeat1 = 45,
  aux_sym_record_body_repeat1 = 46,
  aux_sym_case_expression_repeat1 = 47,
  aux_sym_alternatives_repeat1 = 48,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_case] = "case",
  [anon_sym_of] = "of",
  [anon_sym_DASH_GT] = "->",
  [sym_identifier] = "identifier",
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
  [sym_function_body] = "function_body",
  [sym_simple_expression] = "simple_expression",
  [sym_let_binding_body] = "let_binding_body",
  [sym_let_binding] = "let_binding",
  [sym_case_expression] = "case_expression",
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
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_identifier] = sym_identifier,
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
  [sym_function_body] = sym_function_body,
  [sym_simple_expression] = sym_simple_expression,
  [sym_let_binding_body] = sym_let_binding_body,
  [sym_let_binding] = sym_let_binding,
  [sym_case_expression] = sym_case_expression,
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 9,
  [17] = 5,
  [18] = 4,
  [19] = 3,
  [20] = 7,
  [21] = 10,
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
  [35] = 31,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 25,
  [40] = 24,
  [41] = 41,
  [42] = 38,
  [43] = 29,
  [44] = 44,
  [45] = 45,
  [46] = 41,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(16);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 27:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(61);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_module_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 29},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 29},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 29},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 29},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 29},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 29},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 29},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 29},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 29},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 26},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
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
    [sym_source_file] = STATE(86),
    [sym_module_declaration] = STATE(6),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_case,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_constructor,
    STATE(7), 1,
      sym_binary_operation,
    STATE(15), 1,
      sym_simple_expression,
    STATE(62), 1,
      sym_function_body,
    STATE(63), 1,
      sym_let_binding,
    STATE(66), 1,
      sym_case_expression,
  [31] = 4,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(17), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(15), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [49] = 5,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(17), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [69] = 2,
    ACTIONS(27), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [83] = 7,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(51), 1,
      aux_sym_datatype_head_repeat1,
    STATE(81), 1,
      sym_function_head,
    STATE(82), 1,
      sym_datatype_head,
    STATE(83), 1,
      sym_top_level_declarations,
    STATE(11), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [107] = 2,
    ACTIONS(35), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(33), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [121] = 7,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_type,
    ACTIONS(42), 1,
      sym_identifier,
    STATE(51), 1,
      aux_sym_datatype_head_repeat1,
    STATE(81), 1,
      sym_function_head,
    STATE(82), 1,
      sym_datatype_head,
    STATE(8), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [145] = 2,
    ACTIONS(17), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(15), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [159] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(17), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(15), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [175] = 7,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      aux_sym_datatype_head_repeat1,
    STATE(81), 1,
      sym_function_head,
    STATE(82), 1,
      sym_datatype_head,
    STATE(8), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [199] = 6,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(49), 2,
      anon_sym_type,
      sym_identifier,
  [220] = 8,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_constructor,
    STATE(7), 1,
      sym_binary_operation,
    STATE(14), 1,
      sym_simple_expression,
    STATE(50), 1,
      sym_let_binding,
    STATE(67), 1,
      sym_let_binding_body,
  [245] = 6,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 2,
      anon_sym_type,
      sym_identifier,
  [265] = 6,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 2,
      anon_sym_type,
      sym_identifier,
  [285] = 1,
    ACTIONS(15), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [294] = 1,
    ACTIONS(25), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [303] = 4,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(15), 3,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
  [318] = 3,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(15), 4,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
  [331] = 1,
    ACTIONS(33), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [340] = 2,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(15), 5,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [351] = 4,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(69), 2,
      anon_sym_type,
      sym_identifier,
    STATE(23), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [366] = 4,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    ACTIONS(75), 2,
      anon_sym_type,
      sym_identifier,
    STATE(23), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [381] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_binary_operation,
    STATE(21), 1,
      sym_simple_expression,
    ACTIONS(82), 2,
      sym_identifier,
      sym_constructor,
  [395] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_simple_expression,
    STATE(20), 1,
      sym_binary_operation,
    ACTIONS(82), 2,
      sym_identifier,
      sym_constructor,
  [409] = 4,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    STATE(36), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(86), 2,
      anon_sym_type,
      sym_identifier,
  [423] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_binary_operation,
    STATE(37), 1,
      sym_simple_expression,
    ACTIONS(82), 2,
      sym_identifier,
      sym_constructor,
  [437] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_binary_operation,
    STATE(12), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [451] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_binary_operation,
    STATE(35), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [465] = 4,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(92), 2,
      anon_sym_type,
      sym_identifier,
  [479] = 5,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
  [495] = 4,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      anon_sym_PIPE,
    STATE(34), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(98), 2,
      anon_sym_type,
      sym_identifier,
  [509] = 5,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(102), 1,
      anon_sym_in,
    ACTIONS(104), 1,
      anon_sym_PLUS,
  [525] = 4,
    ACTIONS(100), 1,
      anon_sym_PIPE,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(108), 2,
      anon_sym_type,
      sym_identifier,
  [539] = 5,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
  [555] = 4,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 1,
      anon_sym_PIPE,
    STATE(36), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(114), 2,
      anon_sym_type,
      sym_identifier,
  [569] = 5,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(104), 1,
      anon_sym_PLUS,
    ACTIONS(119), 1,
      anon_sym_of,
  [585] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_simple_expression,
    STATE(7), 1,
      sym_binary_operation,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [599] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_simple_expression,
    STATE(7), 1,
      sym_binary_operation,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [613] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_binary_operation,
    STATE(10), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [627] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_binary_operation,
    STATE(9), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [641] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_simple_expression,
    STATE(20), 1,
      sym_binary_operation,
    ACTIONS(82), 2,
      sym_identifier,
      sym_constructor,
  [655] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_binary_operation,
    STATE(31), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [669] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_binary_operation,
    STATE(33), 1,
      sym_simple_expression,
    ACTIONS(82), 2,
      sym_identifier,
      sym_constructor,
  [683] = 4,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    STATE(45), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_type,
      sym_identifier,
  [697] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_simple_expression,
    STATE(20), 1,
      sym_binary_operation,
    ACTIONS(82), 2,
      sym_identifier,
      sym_constructor,
  [711] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(123), 2,
      anon_sym_type,
      sym_identifier,
  [720] = 2,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(114), 2,
      anon_sym_type,
      sym_identifier,
  [729] = 2,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 2,
      anon_sym_type,
      sym_identifier,
  [737] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 2,
      anon_sym_type,
      sym_identifier,
  [745] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(55), 1,
      aux_sym_datatype_head_repeat1,
  [755] = 3,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_record_body_repeat1,
  [765] = 3,
    ACTIONS(140), 1,
      anon_sym_EQ,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(56), 1,
      aux_sym_datatype_head_repeat1,
  [775] = 3,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      sym_constructor,
    STATE(60), 1,
      sym_sumtype_body,
  [785] = 3,
    ACTIONS(148), 1,
      anon_sym_EQ,
    ACTIONS(150), 1,
      sym_identifier,
    STATE(55), 1,
      aux_sym_datatype_head_repeat1,
  [795] = 3,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_EQ,
    STATE(55), 1,
      aux_sym_datatype_head_repeat1,
  [805] = 3,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_record_body_repeat1,
  [815] = 3,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(61), 1,
      sym_record_member,
    STATE(74), 1,
      sym_record_body,
  [825] = 3,
    ACTIONS(162), 1,
      sym_constructor,
    STATE(30), 1,
      sym_alternative,
    STATE(73), 1,
      sym_pattern,
  [835] = 2,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 2,
      anon_sym_type,
      sym_identifier,
  [843] = 3,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_record_body_repeat1,
  [853] = 2,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 2,
      anon_sym_type,
      sym_identifier,
  [861] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 2,
      anon_sym_type,
      sym_identifier,
  [869] = 3,
    ACTIONS(162), 1,
      sym_constructor,
    STATE(48), 1,
      sym_alternative,
    STATE(73), 1,
      sym_pattern,
  [879] = 2,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    STATE(22), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [887] = 2,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 2,
      anon_sym_type,
      sym_identifier,
  [895] = 2,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 2,
      anon_sym_type,
      sym_identifier,
  [903] = 1,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [908] = 1,
    ACTIONS(182), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [913] = 1,
    ACTIONS(184), 2,
      anon_sym_type,
      sym_identifier,
  [918] = 2,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(68), 1,
      sym_record_member,
  [925] = 1,
    ACTIONS(186), 1,
      anon_sym_COLON,
  [929] = 1,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
  [933] = 1,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
  [937] = 1,
    ACTIONS(192), 1,
      anon_sym_DASH_GT,
  [941] = 1,
    ACTIONS(194), 1,
      sym_identifier,
  [945] = 1,
    ACTIONS(196), 1,
      sym_constructor,
  [949] = 1,
    ACTIONS(198), 1,
      anon_sym_EQ,
  [953] = 1,
    ACTIONS(200), 1,
      sym_constructor,
  [957] = 1,
    ACTIONS(202), 1,
      sym_module_name,
  [961] = 1,
    ACTIONS(204), 1,
      anon_sym_EQ,
  [965] = 1,
    ACTIONS(206), 1,
      anon_sym_EQ,
  [969] = 1,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
  [973] = 1,
    ACTIONS(210), 1,
      sym_constructor,
  [977] = 1,
    ACTIONS(212), 1,
      anon_sym_where,
  [981] = 1,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 49,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 285,
  [SMALL_STATE(17)] = 294,
  [SMALL_STATE(18)] = 303,
  [SMALL_STATE(19)] = 318,
  [SMALL_STATE(20)] = 331,
  [SMALL_STATE(21)] = 340,
  [SMALL_STATE(22)] = 351,
  [SMALL_STATE(23)] = 366,
  [SMALL_STATE(24)] = 381,
  [SMALL_STATE(25)] = 395,
  [SMALL_STATE(26)] = 409,
  [SMALL_STATE(27)] = 423,
  [SMALL_STATE(28)] = 437,
  [SMALL_STATE(29)] = 451,
  [SMALL_STATE(30)] = 465,
  [SMALL_STATE(31)] = 479,
  [SMALL_STATE(32)] = 495,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 525,
  [SMALL_STATE(35)] = 539,
  [SMALL_STATE(36)] = 555,
  [SMALL_STATE(37)] = 569,
  [SMALL_STATE(38)] = 585,
  [SMALL_STATE(39)] = 599,
  [SMALL_STATE(40)] = 613,
  [SMALL_STATE(41)] = 627,
  [SMALL_STATE(42)] = 641,
  [SMALL_STATE(43)] = 655,
  [SMALL_STATE(44)] = 669,
  [SMALL_STATE(45)] = 683,
  [SMALL_STATE(46)] = 697,
  [SMALL_STATE(47)] = 711,
  [SMALL_STATE(48)] = 720,
  [SMALL_STATE(49)] = 729,
  [SMALL_STATE(50)] = 737,
  [SMALL_STATE(51)] = 745,
  [SMALL_STATE(52)] = 755,
  [SMALL_STATE(53)] = 765,
  [SMALL_STATE(54)] = 775,
  [SMALL_STATE(55)] = 785,
  [SMALL_STATE(56)] = 795,
  [SMALL_STATE(57)] = 805,
  [SMALL_STATE(58)] = 815,
  [SMALL_STATE(59)] = 825,
  [SMALL_STATE(60)] = 835,
  [SMALL_STATE(61)] = 843,
  [SMALL_STATE(62)] = 853,
  [SMALL_STATE(63)] = 861,
  [SMALL_STATE(64)] = 869,
  [SMALL_STATE(65)] = 879,
  [SMALL_STATE(66)] = 887,
  [SMALL_STATE(67)] = 895,
  [SMALL_STATE(68)] = 903,
  [SMALL_STATE(69)] = 908,
  [SMALL_STATE(70)] = 913,
  [SMALL_STATE(71)] = 918,
  [SMALL_STATE(72)] = 925,
  [SMALL_STATE(73)] = 929,
  [SMALL_STATE(74)] = 933,
  [SMALL_STATE(75)] = 937,
  [SMALL_STATE(76)] = 941,
  [SMALL_STATE(77)] = 945,
  [SMALL_STATE(78)] = 949,
  [SMALL_STATE(79)] = 953,
  [SMALL_STATE(80)] = 957,
  [SMALL_STATE(81)] = 961,
  [SMALL_STATE(82)] = 965,
  [SMALL_STATE(83)] = 969,
  [SMALL_STATE(84)] = 973,
  [SMALL_STATE(85)] = 977,
  [SMALL_STATE(86)] = 981,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(84),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(51),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declarations, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3, .production_id = 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative, 3, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, .production_id = 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 4, .production_id = 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2), SHIFT_REPEAT(59),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sumtype_body, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sumtype_body, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sumtype_body, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sumtype_body, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(64),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sumtype_body_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sumtype_body_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sumtype_body_repeat1, 2), SHIFT_REPEAT(77),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 5, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 5, .production_id = 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_head, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 2, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2), SHIFT_REPEAT(55),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 3, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2), SHIFT_REPEAT(71),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 6, .production_id = 6),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 6, .production_id = 6),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_member, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [214] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
