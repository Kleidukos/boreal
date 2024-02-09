#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
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
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_COLON = 12,
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
  sym_function_declaration = 30,
  sym_function_head = 31,
  sym_function_body = 32,
  sym_simple_expression = 33,
  sym_record_body = 34,
  sym_record_member = 35,
  sym_let_binding = 36,
  sym_case_expression = 37,
  sym_alternatives = 38,
  sym_alternative = 39,
  sym_pattern = 40,
  sym_binary_operation = 41,
  aux_sym_top_level_declarations_repeat1 = 42,
  aux_sym_datatype_head_repeat1 = 43,
  aux_sym_sumtype_body_repeat1 = 44,
  aux_sym_record_body_repeat1 = 45,
  aux_sym_case_expression_repeat1 = 46,
  aux_sym_alternatives_repeat1 = 47,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
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
  [sym_function_declaration] = "function_declaration",
  [sym_function_head] = "function_head",
  [sym_function_body] = "function_body",
  [sym_simple_expression] = "simple_expression",
  [sym_record_body] = "record_body",
  [sym_record_member] = "record_member",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_head] = sym_function_head,
  [sym_function_body] = sym_function_body,
  [sym_simple_expression] = sym_simple_expression,
  [sym_record_body] = sym_record_body,
  [sym_record_member] = sym_record_member,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_record_body] = {
    .visible = true,
    .named = true,
  },
  [sym_record_member] = {
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
  [15] = 9,
  [16] = 8,
  [17] = 7,
  [18] = 6,
  [19] = 10,
  [20] = 5,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 25,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 29,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 23,
  [41] = 41,
  [42] = 38,
  [43] = 39,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(15);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 26:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_module_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(49);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 64:
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
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 28},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 28},
  [63] = {.lex_state = 28},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 28},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 25},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_source_file] = STATE(84),
    [sym_module_declaration] = STATE(4),
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
    STATE(5), 1,
      sym_binary_operation,
    STATE(14), 1,
      sym_simple_expression,
    STATE(62), 1,
      sym_function_body,
    STATE(63), 1,
      sym_let_binding,
    STATE(65), 1,
      sym_case_expression,
  [31] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(51), 1,
      aux_sym_datatype_head_repeat1,
    STATE(79), 1,
      sym_function_head,
    STATE(80), 1,
      sym_datatype_head,
    STATE(11), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [55] = 7,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(51), 1,
      aux_sym_datatype_head_repeat1,
    STATE(79), 1,
      sym_function_head,
    STATE(80), 1,
      sym_datatype_head,
    STATE(81), 1,
      sym_top_level_declarations,
    STATE(3), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [79] = 2,
    ACTIONS(23), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(21), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [93] = 5,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(27), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [113] = 4,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(27), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [131] = 3,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(27), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(25), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [147] = 2,
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
  [161] = 2,
    ACTIONS(37), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [175] = 7,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_type,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(51), 1,
      aux_sym_datatype_head_repeat1,
    STATE(79), 1,
      sym_function_head,
    STATE(80), 1,
      sym_datatype_head,
    STATE(11), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [199] = 6,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(49), 2,
      anon_sym_type,
      sym_identifier,
  [220] = 6,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 2,
      anon_sym_type,
      sym_identifier,
  [240] = 6,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 2,
      anon_sym_type,
      sym_identifier,
  [260] = 1,
    ACTIONS(25), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [269] = 2,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(25), 5,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [280] = 3,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(25), 4,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
  [293] = 4,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(25), 3,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
  [308] = 1,
    ACTIONS(35), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [317] = 1,
    ACTIONS(21), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [326] = 4,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(69), 2,
      anon_sym_type,
      sym_identifier,
    STATE(22), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [341] = 4,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    ACTIONS(75), 2,
      anon_sym_type,
      sym_identifier,
    STATE(22), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [356] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_simple_expression,
    STATE(20), 1,
      sym_binary_operation,
    ACTIONS(82), 2,
      sym_identifier,
      sym_constructor,
  [370] = 4,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(86), 2,
      anon_sym_type,
      sym_identifier,
  [384] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(29), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [398] = 4,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(93), 2,
      anon_sym_type,
      sym_identifier,
  [412] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(12), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [426] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(35), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [440] = 5,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
  [456] = 4,
    ACTIONS(95), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(101), 2,
      anon_sym_type,
      sym_identifier,
  [470] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(13), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [484] = 4,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      anon_sym_PIPE,
    STATE(34), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(105), 2,
      anon_sym_type,
      sym_identifier,
  [498] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_in,
    ACTIONS(111), 1,
      anon_sym_PLUS,
  [514] = 4,
    ACTIONS(107), 1,
      anon_sym_PIPE,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(115), 2,
      anon_sym_type,
      sym_identifier,
  [528] = 5,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
  [544] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_binary_operation,
    STATE(37), 1,
      sym_simple_expression,
    ACTIONS(82), 2,
      sym_identifier,
      sym_constructor,
  [558] = 5,
    ACTIONS(61), 1,
      anon_sym_SLASH,
    ACTIONS(63), 1,
      anon_sym_STAR,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_PLUS,
    ACTIONS(119), 1,
      anon_sym_of,
  [574] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(6), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [588] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(7), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [602] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(8), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [616] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(9), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [630] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_simple_expression,
    STATE(20), 1,
      sym_binary_operation,
    ACTIONS(82), 2,
      sym_identifier,
      sym_constructor,
  [644] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_simple_expression,
    STATE(20), 1,
      sym_binary_operation,
    ACTIONS(82), 2,
      sym_identifier,
      sym_constructor,
  [658] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_binary_operation,
    STATE(33), 1,
      sym_simple_expression,
    ACTIONS(82), 2,
      sym_identifier,
      sym_constructor,
  [672] = 4,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    STATE(45), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(123), 2,
      anon_sym_type,
      sym_identifier,
  [686] = 4,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_simple_expression,
    STATE(20), 1,
      sym_binary_operation,
    ACTIONS(82), 2,
      sym_identifier,
      sym_constructor,
  [700] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(123), 2,
      anon_sym_type,
      sym_identifier,
  [709] = 2,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(86), 2,
      anon_sym_type,
      sym_identifier,
  [718] = 2,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 2,
      anon_sym_type,
      sym_identifier,
  [726] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(50), 1,
      aux_sym_datatype_head_repeat1,
  [736] = 3,
    ACTIONS(137), 1,
      anon_sym_EQ,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(50), 1,
      aux_sym_datatype_head_repeat1,
  [746] = 3,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_record_body_repeat1,
  [756] = 3,
    ACTIONS(145), 1,
      anon_sym_EQ,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(56), 1,
      aux_sym_datatype_head_repeat1,
  [766] = 3,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      sym_constructor,
    STATE(60), 1,
      sym_sumtype_body,
  [776] = 2,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    STATE(21), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [784] = 3,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_EQ,
    STATE(50), 1,
      aux_sym_datatype_head_repeat1,
  [794] = 3,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_record_body_repeat1,
  [804] = 3,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(61), 1,
      sym_record_member,
    STATE(72), 1,
      sym_record_body,
  [814] = 3,
    ACTIONS(162), 1,
      sym_constructor,
    STATE(30), 1,
      sym_alternative,
    STATE(71), 1,
      sym_pattern,
  [824] = 2,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 2,
      anon_sym_type,
      sym_identifier,
  [832] = 3,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_record_body_repeat1,
  [842] = 2,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 2,
      anon_sym_type,
      sym_identifier,
  [850] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 2,
      anon_sym_type,
      sym_identifier,
  [858] = 3,
    ACTIONS(162), 1,
      sym_constructor,
    STATE(48), 1,
      sym_alternative,
    STATE(71), 1,
      sym_pattern,
  [868] = 2,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 2,
      anon_sym_type,
      sym_identifier,
  [876] = 1,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [881] = 1,
    ACTIONS(178), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [886] = 1,
    ACTIONS(180), 2,
      anon_sym_type,
      sym_identifier,
  [891] = 2,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(66), 1,
      sym_record_member,
  [898] = 1,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [902] = 1,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
  [906] = 1,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
  [910] = 1,
    ACTIONS(188), 1,
      anon_sym_DASH_GT,
  [914] = 1,
    ACTIONS(190), 1,
      sym_identifier,
  [918] = 1,
    ACTIONS(192), 1,
      sym_constructor,
  [922] = 1,
    ACTIONS(194), 1,
      anon_sym_EQ,
  [926] = 1,
    ACTIONS(196), 1,
      sym_constructor,
  [930] = 1,
    ACTIONS(198), 1,
      sym_module_name,
  [934] = 1,
    ACTIONS(200), 1,
      anon_sym_EQ,
  [938] = 1,
    ACTIONS(202), 1,
      anon_sym_EQ,
  [942] = 1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
  [946] = 1,
    ACTIONS(206), 1,
      sym_constructor,
  [950] = 1,
    ACTIONS(208), 1,
      anon_sym_where,
  [954] = 1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 93,
  [SMALL_STATE(7)] = 113,
  [SMALL_STATE(8)] = 131,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 161,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 240,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 269,
  [SMALL_STATE(17)] = 280,
  [SMALL_STATE(18)] = 293,
  [SMALL_STATE(19)] = 308,
  [SMALL_STATE(20)] = 317,
  [SMALL_STATE(21)] = 326,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 356,
  [SMALL_STATE(24)] = 370,
  [SMALL_STATE(25)] = 384,
  [SMALL_STATE(26)] = 398,
  [SMALL_STATE(27)] = 412,
  [SMALL_STATE(28)] = 426,
  [SMALL_STATE(29)] = 440,
  [SMALL_STATE(30)] = 456,
  [SMALL_STATE(31)] = 470,
  [SMALL_STATE(32)] = 484,
  [SMALL_STATE(33)] = 498,
  [SMALL_STATE(34)] = 514,
  [SMALL_STATE(35)] = 528,
  [SMALL_STATE(36)] = 544,
  [SMALL_STATE(37)] = 558,
  [SMALL_STATE(38)] = 574,
  [SMALL_STATE(39)] = 588,
  [SMALL_STATE(40)] = 602,
  [SMALL_STATE(41)] = 616,
  [SMALL_STATE(42)] = 630,
  [SMALL_STATE(43)] = 644,
  [SMALL_STATE(44)] = 658,
  [SMALL_STATE(45)] = 672,
  [SMALL_STATE(46)] = 686,
  [SMALL_STATE(47)] = 700,
  [SMALL_STATE(48)] = 709,
  [SMALL_STATE(49)] = 718,
  [SMALL_STATE(50)] = 726,
  [SMALL_STATE(51)] = 736,
  [SMALL_STATE(52)] = 746,
  [SMALL_STATE(53)] = 756,
  [SMALL_STATE(54)] = 766,
  [SMALL_STATE(55)] = 776,
  [SMALL_STATE(56)] = 784,
  [SMALL_STATE(57)] = 794,
  [SMALL_STATE(58)] = 804,
  [SMALL_STATE(59)] = 814,
  [SMALL_STATE(60)] = 824,
  [SMALL_STATE(61)] = 832,
  [SMALL_STATE(62)] = 842,
  [SMALL_STATE(63)] = 850,
  [SMALL_STATE(64)] = 858,
  [SMALL_STATE(65)] = 868,
  [SMALL_STATE(66)] = 876,
  [SMALL_STATE(67)] = 881,
  [SMALL_STATE(68)] = 886,
  [SMALL_STATE(69)] = 891,
  [SMALL_STATE(70)] = 898,
  [SMALL_STATE(71)] = 902,
  [SMALL_STATE(72)] = 906,
  [SMALL_STATE(73)] = 910,
  [SMALL_STATE(74)] = 914,
  [SMALL_STATE(75)] = 918,
  [SMALL_STATE(76)] = 922,
  [SMALL_STATE(77)] = 926,
  [SMALL_STATE(78)] = 930,
  [SMALL_STATE(79)] = 934,
  [SMALL_STATE(80)] = 938,
  [SMALL_STATE(81)] = 942,
  [SMALL_STATE(82)] = 946,
  [SMALL_STATE(83)] = 950,
  [SMALL_STATE(84)] = 954,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declarations, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(82),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(51),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3, .production_id = 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative, 3, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 6, .production_id = 6),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 6, .production_id = 6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, .production_id = 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 4, .production_id = 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2), SHIFT_REPEAT(59),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(64),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sumtype_body, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sumtype_body, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sumtype_body, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sumtype_body, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sumtype_body_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sumtype_body_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sumtype_body_repeat1, 2), SHIFT_REPEAT(75),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 5, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 5, .production_id = 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2), SHIFT_REPEAT(50),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_head, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 2, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 3, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2), SHIFT_REPEAT(69),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_member, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [210] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
