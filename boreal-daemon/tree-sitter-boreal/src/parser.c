#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

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
  anon_sym_DASH_GT = 18,
  sym_identifier = 19,
  sym_constructor = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  sym_source_file = 25,
  sym_module_declaration = 26,
  sym_top_level_declarations = 27,
  sym_import_declaration = 28,
  sym_datatype_declaration = 29,
  sym_datatype_head = 30,
  sym_sumtype_body = 31,
  sym_record_body = 32,
  sym_record_member = 33,
  sym_function_declaration = 34,
  sym_function_head = 35,
  sym_function_body = 36,
  sym_simple_expression = 37,
  sym_let_binding_body = 38,
  sym_let_binding = 39,
  sym_case_expression = 40,
  sym_alternatives = 41,
  sym_alternative = 42,
  sym_pattern = 43,
  sym_binary_operation = 44,
  aux_sym_top_level_declarations_repeat1 = 45,
  aux_sym_datatype_head_repeat1 = 46,
  aux_sym_sumtype_body_repeat1 = 47,
  aux_sym_record_body_repeat1 = 48,
  aux_sym_case_expression_repeat1 = 49,
  aux_sym_alternatives_repeat1 = 50,
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
  field_conditional = 7,
  field_head = 8,
  field_module = 9,
  field_name = 10,
  field_pattern = 11,
  field_rhs = 12,
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
  [field_module] = "module",
  [field_name] = "name",
  [field_pattern] = "pattern",
  [field_rhs] = "rhs",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 2},
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
  [16] = 16,
  [17] = 17,
  [18] = 7,
  [19] = 19,
  [20] = 20,
  [21] = 6,
  [22] = 22,
  [23] = 23,
  [24] = 5,
  [25] = 25,
  [26] = 8,
  [27] = 27,
  [28] = 9,
  [29] = 10,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 41,
  [42] = 30,
  [43] = 43,
  [44] = 41,
  [45] = 45,
  [46] = 43,
  [47] = 37,
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
  [87] = 87,
  [88] = 88,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '(', 48,
        ')', 49,
        '*', 75,
        '+', 72,
        ',', 46,
        '-', 74,
        '/', 76,
        ':', 47,
        '=', 40,
        'c', 6,
        'i', 17,
        'l', 8,
        'm', 19,
        'o', 14,
        't', 29,
        'w', 15,
        '{', 41,
        '|', 45,
        '}', 42,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '=') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 30:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 31:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        ')', 49,
        '*', 75,
        '+', 72,
        '-', 73,
        '/', 76,
        'i', 61,
        't', 69,
        '|', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_module_name);
      if (lookahead == '.') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 33},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 33},
  [51] = {.lex_state = 33},
  [52] = {.lex_state = 33},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 30},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 30},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_constructor] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(88),
    [sym_module_declaration] = STATE(3),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(10), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(60), 1,
      aux_sym_datatype_head_repeat1,
    STATE(82), 1,
      sym_function_head,
    STATE(83), 1,
      sym_datatype_head,
    STATE(2), 4,
      sym_import_declaration,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [28] = 8,
    ACTIONS(16), 1,
      anon_sym_import,
    ACTIONS(18), 1,
      anon_sym_type,
    ACTIONS(20), 1,
      sym_identifier,
    STATE(60), 1,
      aux_sym_datatype_head_repeat1,
    STATE(82), 1,
      sym_function_head,
    STATE(83), 1,
      sym_datatype_head,
    STATE(84), 1,
      sym_top_level_declarations,
    STATE(4), 4,
      sym_import_declaration,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [56] = 8,
    ACTIONS(16), 1,
      anon_sym_import,
    ACTIONS(18), 1,
      anon_sym_type,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      aux_sym_datatype_head_repeat1,
    STATE(82), 1,
      sym_function_head,
    STATE(83), 1,
      sym_datatype_head,
    STATE(2), 4,
      sym_import_declaration,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [84] = 2,
    ACTIONS(26), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
    ACTIONS(24), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [99] = 2,
    ACTIONS(30), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
    ACTIONS(28), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [114] = 4,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(38), 1,
      anon_sym_SLASH,
    ACTIONS(34), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
    ACTIONS(32), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [133] = 5,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(38), 1,
      anon_sym_SLASH,
    ACTIONS(40), 1,
      anon_sym_DASH,
    ACTIONS(34), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [154] = 3,
    ACTIONS(38), 1,
      anon_sym_SLASH,
    ACTIONS(34), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
    ACTIONS(32), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [171] = 2,
    ACTIONS(34), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
    ACTIONS(32), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [186] = 10,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      anon_sym_let,
    ACTIONS(46), 1,
      anon_sym_case,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(50), 1,
      sym_constructor,
    STATE(6), 1,
      sym_binary_operation,
    STATE(13), 1,
      sym_simple_expression,
    STATE(50), 1,
      sym_case_expression,
    STATE(53), 1,
      sym_function_body,
    STATE(56), 1,
      sym_let_binding,
  [217] = 6,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(38), 1,
      anon_sym_SLASH,
    ACTIONS(40), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(54), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [239] = 6,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(38), 1,
      anon_sym_SLASH,
    ACTIONS(40), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [260] = 6,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(38), 1,
      anon_sym_SLASH,
    ACTIONS(40), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [281] = 8,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      anon_sym_let,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(50), 1,
      sym_constructor,
    STATE(6), 1,
      sym_binary_operation,
    STATE(14), 1,
      sym_simple_expression,
    STATE(54), 1,
      sym_let_binding,
    STATE(55), 1,
      sym_let_binding_body,
  [306] = 4,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      anon_sym_PIPE,
    STATE(16), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
    ACTIONS(68), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [322] = 4,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    STATE(16), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
    ACTIONS(75), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [338] = 3,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(32), 4,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
  [351] = 4,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    STATE(19), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(85), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [366] = 4,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    STATE(20), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(92), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [381] = 1,
    ACTIONS(28), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [390] = 4,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    STATE(23), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(99), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [405] = 4,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_sumtype_body_repeat1,
    ACTIONS(105), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [420] = 1,
    ACTIONS(24), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [429] = 4,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    STATE(19), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(109), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [444] = 4,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_DASH,
    ACTIONS(32), 3,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
  [459] = 4,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(117), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [474] = 2,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(32), 5,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [485] = 1,
    ACTIONS(32), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [494] = 4,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_binary_operation,
    STATE(28), 1,
      sym_simple_expression,
    ACTIONS(121), 2,
      sym_identifier,
      sym_constructor,
  [508] = 4,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_binary_operation,
    STATE(39), 1,
      sym_simple_expression,
    ACTIONS(121), 2,
      sym_identifier,
      sym_constructor,
  [522] = 4,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_binary_operation,
    STATE(47), 1,
      sym_simple_expression,
    ACTIONS(50), 2,
      sym_identifier,
      sym_constructor,
  [536] = 4,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_binary_operation,
    STATE(37), 1,
      sym_simple_expression,
    ACTIONS(50), 2,
      sym_identifier,
      sym_constructor,
  [550] = 5,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_in,
    ACTIONS(125), 1,
      anon_sym_PLUS,
  [566] = 4,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_binary_operation,
    STATE(12), 1,
      sym_simple_expression,
    ACTIONS(50), 2,
      sym_identifier,
      sym_constructor,
  [580] = 2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(85), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [590] = 5,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(38), 1,
      anon_sym_SLASH,
    ACTIONS(40), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
  [606] = 4,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_binary_operation,
    STATE(26), 1,
      sym_simple_expression,
    ACTIONS(121), 2,
      sym_identifier,
      sym_constructor,
  [620] = 5,
    ACTIONS(79), 1,
      anon_sym_STAR,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_PLUS,
    ACTIONS(129), 1,
      anon_sym_of,
  [636] = 4,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_binary_operation,
    STATE(8), 1,
      sym_simple_expression,
    ACTIONS(50), 2,
      sym_identifier,
      sym_constructor,
  [650] = 4,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_binary_operation,
    STATE(7), 1,
      sym_simple_expression,
    ACTIONS(50), 2,
      sym_identifier,
      sym_constructor,
  [664] = 4,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_binary_operation,
    STATE(9), 1,
      sym_simple_expression,
    ACTIONS(50), 2,
      sym_identifier,
      sym_constructor,
  [678] = 4,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_binary_operation,
    STATE(10), 1,
      sym_simple_expression,
    ACTIONS(50), 2,
      sym_identifier,
      sym_constructor,
  [692] = 4,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_simple_expression,
    STATE(21), 1,
      sym_binary_operation,
    ACTIONS(121), 2,
      sym_identifier,
      sym_constructor,
  [706] = 2,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(92), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [716] = 4,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_binary_operation,
    STATE(29), 1,
      sym_simple_expression,
    ACTIONS(121), 2,
      sym_identifier,
      sym_constructor,
  [730] = 5,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(38), 1,
      anon_sym_SLASH,
    ACTIONS(40), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
  [746] = 4,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_binary_operation,
    STATE(34), 1,
      sym_simple_expression,
    ACTIONS(121), 2,
      sym_identifier,
      sym_constructor,
  [760] = 2,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [769] = 2,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [778] = 2,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [787] = 2,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [796] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [805] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [814] = 2,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [823] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [832] = 3,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_record_body_repeat1,
  [842] = 3,
    ACTIONS(162), 1,
      anon_sym_EQ,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(67), 1,
      aux_sym_datatype_head_repeat1,
  [852] = 3,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_record_body_repeat1,
  [862] = 3,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_EQ,
    STATE(67), 1,
      aux_sym_datatype_head_repeat1,
  [872] = 3,
    ACTIONS(172), 1,
      sym_constructor,
    STATE(27), 1,
      sym_alternative,
    STATE(79), 1,
      sym_pattern,
  [882] = 3,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_record_body_repeat1,
  [892] = 1,
    ACTIONS(176), 3,
      anon_sym_import,
      anon_sym_type,
      sym_identifier,
  [898] = 3,
    ACTIONS(178), 1,
      anon_sym_EQ,
    ACTIONS(180), 1,
      sym_identifier,
    STATE(58), 1,
      aux_sym_datatype_head_repeat1,
  [908] = 2,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    STATE(17), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [916] = 3,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      sym_constructor,
    STATE(49), 1,
      sym_sumtype_body,
  [926] = 3,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(67), 1,
      aux_sym_datatype_head_repeat1,
  [936] = 3,
    ACTIONS(172), 1,
      sym_constructor,
    STATE(36), 1,
      sym_alternative,
    STATE(79), 1,
      sym_pattern,
  [946] = 3,
    ACTIONS(191), 1,
      sym_identifier,
    STATE(62), 1,
      sym_record_member,
    STATE(81), 1,
      sym_record_body,
  [956] = 2,
    ACTIONS(191), 1,
      sym_identifier,
    STATE(71), 1,
      sym_record_member,
  [963] = 1,
    ACTIONS(157), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [968] = 1,
    ACTIONS(193), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [973] = 1,
    ACTIONS(195), 1,
      anon_sym_COLON,
  [977] = 1,
    ACTIONS(197), 1,
      sym_module_name,
  [981] = 1,
    ACTIONS(199), 1,
      sym_identifier,
  [985] = 1,
    ACTIONS(201), 1,
      sym_constructor,
  [989] = 1,
    ACTIONS(203), 1,
      sym_constructor,
  [993] = 1,
    ACTIONS(205), 1,
      anon_sym_EQ,
  [997] = 1,
    ACTIONS(207), 1,
      anon_sym_DASH_GT,
  [1001] = 1,
    ACTIONS(209), 1,
      anon_sym_DASH_GT,
  [1005] = 1,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
  [1009] = 1,
    ACTIONS(213), 1,
      anon_sym_EQ,
  [1013] = 1,
    ACTIONS(215), 1,
      anon_sym_EQ,
  [1017] = 1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [1021] = 1,
    ACTIONS(219), 1,
      sym_constructor,
  [1025] = 1,
    ACTIONS(221), 1,
      sym_module_name,
  [1029] = 1,
    ACTIONS(223), 1,
      anon_sym_where,
  [1033] = 1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 99,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 217,
  [SMALL_STATE(13)] = 239,
  [SMALL_STATE(14)] = 260,
  [SMALL_STATE(15)] = 281,
  [SMALL_STATE(16)] = 306,
  [SMALL_STATE(17)] = 322,
  [SMALL_STATE(18)] = 338,
  [SMALL_STATE(19)] = 351,
  [SMALL_STATE(20)] = 366,
  [SMALL_STATE(21)] = 381,
  [SMALL_STATE(22)] = 390,
  [SMALL_STATE(23)] = 405,
  [SMALL_STATE(24)] = 420,
  [SMALL_STATE(25)] = 429,
  [SMALL_STATE(26)] = 444,
  [SMALL_STATE(27)] = 459,
  [SMALL_STATE(28)] = 474,
  [SMALL_STATE(29)] = 485,
  [SMALL_STATE(30)] = 494,
  [SMALL_STATE(31)] = 508,
  [SMALL_STATE(32)] = 522,
  [SMALL_STATE(33)] = 536,
  [SMALL_STATE(34)] = 550,
  [SMALL_STATE(35)] = 566,
  [SMALL_STATE(36)] = 580,
  [SMALL_STATE(37)] = 590,
  [SMALL_STATE(38)] = 606,
  [SMALL_STATE(39)] = 620,
  [SMALL_STATE(40)] = 636,
  [SMALL_STATE(41)] = 650,
  [SMALL_STATE(42)] = 664,
  [SMALL_STATE(43)] = 678,
  [SMALL_STATE(44)] = 692,
  [SMALL_STATE(45)] = 706,
  [SMALL_STATE(46)] = 716,
  [SMALL_STATE(47)] = 730,
  [SMALL_STATE(48)] = 746,
  [SMALL_STATE(49)] = 760,
  [SMALL_STATE(50)] = 769,
  [SMALL_STATE(51)] = 778,
  [SMALL_STATE(52)] = 787,
  [SMALL_STATE(53)] = 796,
  [SMALL_STATE(54)] = 805,
  [SMALL_STATE(55)] = 814,
  [SMALL_STATE(56)] = 823,
  [SMALL_STATE(57)] = 832,
  [SMALL_STATE(58)] = 842,
  [SMALL_STATE(59)] = 852,
  [SMALL_STATE(60)] = 862,
  [SMALL_STATE(61)] = 872,
  [SMALL_STATE(62)] = 882,
  [SMALL_STATE(63)] = 892,
  [SMALL_STATE(64)] = 898,
  [SMALL_STATE(65)] = 908,
  [SMALL_STATE(66)] = 916,
  [SMALL_STATE(67)] = 926,
  [SMALL_STATE(68)] = 936,
  [SMALL_STATE(69)] = 946,
  [SMALL_STATE(70)] = 956,
  [SMALL_STATE(71)] = 963,
  [SMALL_STATE(72)] = 968,
  [SMALL_STATE(73)] = 973,
  [SMALL_STATE(74)] = 977,
  [SMALL_STATE(75)] = 981,
  [SMALL_STATE(76)] = 985,
  [SMALL_STATE(77)] = 989,
  [SMALL_STATE(78)] = 993,
  [SMALL_STATE(79)] = 997,
  [SMALL_STATE(80)] = 1001,
  [SMALL_STATE(81)] = 1005,
  [SMALL_STATE(82)] = 1009,
  [SMALL_STATE(83)] = 1013,
  [SMALL_STATE(84)] = 1017,
  [SMALL_STATE(85)] = 1021,
  [SMALL_STATE(86)] = 1025,
  [SMALL_STATE(87)] = 1029,
  [SMALL_STATE(88)] = 1033,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2, 0, 0),
  [7] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declarations, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 3, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 3, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3, 0, 8),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative, 3, 0, 8),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding_body, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding_body, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, 0, 6),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 4, 0, 6),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sumtype_body_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sumtype_body_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sumtype_body_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sumtype_body, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sumtype_body, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sumtype_body, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sumtype_body, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 3, 0, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 3, 0, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, 0, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1, 0, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 5, 0, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 5, 0, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, 0, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 2, 0, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, 0, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, 0, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 6, 0, 7),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 6, 0, 7),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_body_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 3, 0, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_head, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_body, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 2, 0, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2, 0, 0),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_member, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [225] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
