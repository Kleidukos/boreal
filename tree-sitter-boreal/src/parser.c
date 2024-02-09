#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_module = 1,
  anon_sym_where = 2,
  sym_module_name = 3,
  anon_sym_EQ = 4,
  anon_sym_type = 5,
  anon_sym_PIPE = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_let = 9,
  anon_sym_in = 10,
  anon_sym_case = 11,
  anon_sym_of = 12,
  anon_sym_DASH_GT = 13,
  sym_identifier = 14,
  sym_constructor = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  sym_source_file = 20,
  sym_module_declaration = 21,
  sym_top_level_declarations = 22,
  sym_datatype_declaration = 23,
  sym_datatype_head = 24,
  sym_datatype_body = 25,
  sym_function_declaration = 26,
  sym_function_head = 27,
  sym_function_body = 28,
  sym_expression = 29,
  sym_simple_expression = 30,
  sym_let_binding = 31,
  sym_case_expression = 32,
  sym_alternatives = 33,
  sym_alternative = 34,
  sym_pattern = 35,
  sym_binary_operation = 36,
  aux_sym_top_level_declarations_repeat1 = 37,
  aux_sym_datatype_head_repeat1 = 38,
  aux_sym_datatype_body_repeat1 = 39,
  aux_sym_case_expression_repeat1 = 40,
  aux_sym_alternatives_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [sym_module_name] = "module_name",
  [anon_sym_EQ] = "=",
  [anon_sym_type] = "type",
  [anon_sym_PIPE] = "|",
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
  [sym_datatype_body] = "datatype_body",
  [sym_function_declaration] = "function_declaration",
  [sym_function_head] = "function_head",
  [sym_function_body] = "function_body",
  [sym_expression] = "expression",
  [sym_simple_expression] = "simple_expression",
  [sym_let_binding] = "let_binding",
  [sym_case_expression] = "case_expression",
  [sym_alternatives] = "alternatives",
  [sym_alternative] = "alternative",
  [sym_pattern] = "pattern",
  [sym_binary_operation] = "binary_operation",
  [aux_sym_top_level_declarations_repeat1] = "top_level_declarations_repeat1",
  [aux_sym_datatype_head_repeat1] = "datatype_head_repeat1",
  [aux_sym_datatype_body_repeat1] = "datatype_body_repeat1",
  [aux_sym_case_expression_repeat1] = "case_expression_repeat1",
  [aux_sym_alternatives_repeat1] = "alternatives_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_where] = anon_sym_where,
  [sym_module_name] = sym_module_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_PIPE] = anon_sym_PIPE,
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
  [sym_datatype_body] = sym_datatype_body,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_head] = sym_function_head,
  [sym_function_body] = sym_function_body,
  [sym_expression] = sym_expression,
  [sym_simple_expression] = sym_simple_expression,
  [sym_let_binding] = sym_let_binding,
  [sym_case_expression] = sym_case_expression,
  [sym_alternatives] = sym_alternatives,
  [sym_alternative] = sym_alternative,
  [sym_pattern] = sym_pattern,
  [sym_binary_operation] = sym_binary_operation,
  [aux_sym_top_level_declarations_repeat1] = aux_sym_top_level_declarations_repeat1,
  [aux_sym_datatype_head_repeat1] = aux_sym_datatype_head_repeat1,
  [aux_sym_datatype_body_repeat1] = aux_sym_datatype_body_repeat1,
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
  [sym_datatype_body] = {
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
  [sym_expression] = {
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
  [aux_sym_datatype_body_repeat1] = {
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
  field_conditional = 6,
  field_head = 7,
  field_name = 8,
  field_pattern = 9,
  field_rhs = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternatives] = "alternatives",
  [field_binding_body] = "binding_body",
  [field_binding_name] = "binding_name",
  [field_binding_value] = "binding_value",
  [field_body] = "body",
  [field_conditional] = "conditional",
  [field_head] = "head",
  [field_name] = "name",
  [field_pattern] = "pattern",
  [field_rhs] = "rhs",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_body, 2},
    {field_head, 0},
  [3] =
    {field_alternatives, 3},
    {field_conditional, 1},
  [5] =
    {field_binding_body, 5},
    {field_binding_name, 1},
    {field_binding_value, 3},
  [8] =
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
  [15] = 10,
  [16] = 6,
  [17] = 7,
  [18] = 8,
  [19] = 11,
  [20] = 20,
  [21] = 5,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 25,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 27,
  [41] = 41,
  [42] = 42,
  [43] = 34,
  [44] = 35,
  [45] = 37,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(16);
      if (lookahead == '|') ADVANCE(37);
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
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(46);
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
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(42);
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
      if (lookahead == 't') ADVANCE(40);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
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
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 61:
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
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 29},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 29},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 29},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 29},
  [58] = {.lex_state = 29},
  [59] = {.lex_state = 29},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 29},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 26},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
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
    [sym_source_file] = STATE(73),
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
    STATE(57), 1,
      sym_function_body,
    STATE(58), 1,
      sym_case_expression,
    STATE(59), 2,
      sym_expression,
      sym_let_binding,
  [32] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(49), 1,
      aux_sym_datatype_head_repeat1,
    STATE(68), 1,
      sym_function_head,
    STATE(69), 1,
      sym_datatype_head,
    STATE(9), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [56] = 7,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(49), 1,
      aux_sym_datatype_head_repeat1,
    STATE(68), 1,
      sym_function_head,
    STATE(69), 1,
      sym_datatype_head,
    STATE(70), 1,
      sym_top_level_declarations,
    STATE(3), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [80] = 2,
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
  [94] = 3,
    ACTIONS(29), 1,
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
  [110] = 4,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(27), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [128] = 5,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(27), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [148] = 7,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_type,
    ACTIONS(40), 1,
      sym_identifier,
    STATE(49), 1,
      aux_sym_datatype_head_repeat1,
    STATE(68), 1,
      sym_function_head,
    STATE(69), 1,
      sym_datatype_head,
    STATE(9), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [172] = 2,
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
  [186] = 2,
    ACTIONS(45), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [200] = 8,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
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
    STATE(55), 1,
      sym_expression,
    STATE(58), 1,
      sym_case_expression,
  [225] = 6,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(49), 2,
      anon_sym_type,
      sym_identifier,
  [246] = 6,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 2,
      anon_sym_type,
      sym_identifier,
  [266] = 1,
    ACTIONS(25), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [275] = 2,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(25), 5,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [286] = 3,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(25), 4,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
  [299] = 4,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(25), 3,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
  [314] = 1,
    ACTIONS(43), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [323] = 4,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(65), 2,
      anon_sym_type,
      sym_identifier,
    STATE(22), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [338] = 1,
    ACTIONS(21), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [347] = 4,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(71), 2,
      anon_sym_type,
      sym_identifier,
    STATE(22), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [362] = 4,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_simple_expression,
    STATE(21), 1,
      sym_binary_operation,
    ACTIONS(78), 2,
      sym_identifier,
      sym_constructor,
  [376] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(6), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [390] = 5,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
  [406] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(13), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [420] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(25), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [434] = 4,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(84), 2,
      anon_sym_type,
      sym_identifier,
  [448] = 4,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      anon_sym_PIPE,
    STATE(29), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(90), 2,
      anon_sym_type,
      sym_identifier,
  [462] = 4,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym_datatype_body_repeat1,
    ACTIONS(97), 2,
      anon_sym_type,
      sym_identifier,
  [476] = 5,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
  [492] = 4,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(105), 2,
      anon_sym_type,
      sym_identifier,
  [506] = 5,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      anon_sym_of,
    ACTIONS(109), 1,
      anon_sym_PLUS,
  [522] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(8), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [536] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(7), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [550] = 4,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_binary_operation,
    STATE(33), 1,
      sym_simple_expression,
    ACTIONS(78), 2,
      sym_identifier,
      sym_constructor,
  [564] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(10), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [578] = 5,
    ACTIONS(57), 1,
      anon_sym_SLASH,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_PLUS,
    ACTIONS(111), 1,
      anon_sym_in,
  [594] = 4,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym_datatype_body_repeat1,
    ACTIONS(115), 2,
      anon_sym_type,
      sym_identifier,
  [608] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_binary_operation,
    STATE(31), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [622] = 4,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_binary_operation,
    STATE(38), 1,
      sym_simple_expression,
    ACTIONS(78), 2,
      sym_identifier,
      sym_constructor,
  [636] = 4,
    ACTIONS(99), 1,
      anon_sym_PIPE,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      aux_sym_datatype_body_repeat1,
    ACTIONS(122), 2,
      anon_sym_type,
      sym_identifier,
  [650] = 4,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_simple_expression,
    STATE(21), 1,
      sym_binary_operation,
    ACTIONS(78), 2,
      sym_identifier,
      sym_constructor,
  [664] = 4,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_simple_expression,
    STATE(21), 1,
      sym_binary_operation,
    ACTIONS(78), 2,
      sym_identifier,
      sym_constructor,
  [678] = 4,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_simple_expression,
    STATE(21), 1,
      sym_binary_operation,
    ACTIONS(78), 2,
      sym_identifier,
      sym_constructor,
  [692] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(115), 2,
      anon_sym_type,
      sym_identifier,
  [701] = 2,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(90), 2,
      anon_sym_type,
      sym_identifier,
  [710] = 3,
    ACTIONS(124), 1,
      anon_sym_EQ,
    ACTIONS(126), 1,
      sym_identifier,
    STATE(48), 1,
      aux_sym_datatype_head_repeat1,
  [720] = 3,
    ACTIONS(129), 1,
      anon_sym_EQ,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(48), 1,
      aux_sym_datatype_head_repeat1,
  [730] = 3,
    ACTIONS(133), 1,
      sym_constructor,
    STATE(32), 1,
      sym_alternative,
    STATE(65), 1,
      sym_pattern,
  [740] = 2,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    STATE(20), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [748] = 3,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_datatype_head_repeat1,
  [758] = 3,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_EQ,
    STATE(48), 1,
      aux_sym_datatype_head_repeat1,
  [768] = 2,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 2,
      anon_sym_type,
      sym_identifier,
  [776] = 2,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 2,
      anon_sym_type,
      sym_identifier,
  [784] = 3,
    ACTIONS(133), 1,
      sym_constructor,
    STATE(47), 1,
      sym_alternative,
    STATE(65), 1,
      sym_pattern,
  [794] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 2,
      anon_sym_type,
      sym_identifier,
  [802] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 2,
      anon_sym_type,
      sym_identifier,
  [810] = 2,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 2,
      anon_sym_type,
      sym_identifier,
  [818] = 2,
    ACTIONS(157), 1,
      sym_constructor,
    STATE(54), 1,
      sym_datatype_body,
  [825] = 1,
    ACTIONS(159), 2,
      anon_sym_type,
      sym_identifier,
  [830] = 1,
    ACTIONS(161), 1,
      sym_constructor,
  [834] = 1,
    ACTIONS(163), 1,
      sym_identifier,
  [838] = 1,
    ACTIONS(165), 1,
      anon_sym_EQ,
  [842] = 1,
    ACTIONS(167), 1,
      anon_sym_DASH_GT,
  [846] = 1,
    ACTIONS(169), 1,
      sym_module_name,
  [850] = 1,
    ACTIONS(171), 1,
      anon_sym_DASH_GT,
  [854] = 1,
    ACTIONS(173), 1,
      anon_sym_EQ,
  [858] = 1,
    ACTIONS(175), 1,
      anon_sym_EQ,
  [862] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [866] = 1,
    ACTIONS(179), 1,
      sym_constructor,
  [870] = 1,
    ACTIONS(181), 1,
      anon_sym_where,
  [874] = 1,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 200,
  [SMALL_STATE(13)] = 225,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 266,
  [SMALL_STATE(16)] = 275,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 299,
  [SMALL_STATE(19)] = 314,
  [SMALL_STATE(20)] = 323,
  [SMALL_STATE(21)] = 338,
  [SMALL_STATE(22)] = 347,
  [SMALL_STATE(23)] = 362,
  [SMALL_STATE(24)] = 376,
  [SMALL_STATE(25)] = 390,
  [SMALL_STATE(26)] = 406,
  [SMALL_STATE(27)] = 420,
  [SMALL_STATE(28)] = 434,
  [SMALL_STATE(29)] = 448,
  [SMALL_STATE(30)] = 462,
  [SMALL_STATE(31)] = 476,
  [SMALL_STATE(32)] = 492,
  [SMALL_STATE(33)] = 506,
  [SMALL_STATE(34)] = 522,
  [SMALL_STATE(35)] = 536,
  [SMALL_STATE(36)] = 550,
  [SMALL_STATE(37)] = 564,
  [SMALL_STATE(38)] = 578,
  [SMALL_STATE(39)] = 594,
  [SMALL_STATE(40)] = 608,
  [SMALL_STATE(41)] = 622,
  [SMALL_STATE(42)] = 636,
  [SMALL_STATE(43)] = 650,
  [SMALL_STATE(44)] = 664,
  [SMALL_STATE(45)] = 678,
  [SMALL_STATE(46)] = 692,
  [SMALL_STATE(47)] = 701,
  [SMALL_STATE(48)] = 710,
  [SMALL_STATE(49)] = 720,
  [SMALL_STATE(50)] = 730,
  [SMALL_STATE(51)] = 740,
  [SMALL_STATE(52)] = 748,
  [SMALL_STATE(53)] = 758,
  [SMALL_STATE(54)] = 768,
  [SMALL_STATE(55)] = 776,
  [SMALL_STATE(56)] = 784,
  [SMALL_STATE(57)] = 794,
  [SMALL_STATE(58)] = 802,
  [SMALL_STATE(59)] = 810,
  [SMALL_STATE(60)] = 818,
  [SMALL_STATE(61)] = 825,
  [SMALL_STATE(62)] = 830,
  [SMALL_STATE(63)] = 834,
  [SMALL_STATE(64)] = 838,
  [SMALL_STATE(65)] = 842,
  [SMALL_STATE(66)] = 846,
  [SMALL_STATE(67)] = 850,
  [SMALL_STATE(68)] = 854,
  [SMALL_STATE(69)] = 858,
  [SMALL_STATE(70)] = 862,
  [SMALL_STATE(71)] = 866,
  [SMALL_STATE(72)] = 870,
  [SMALL_STATE(73)] = 874,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declarations, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(71),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(49),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3, .production_id = 5),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative, 3, .production_id = 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, .production_id = 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 4, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2), SHIFT_REPEAT(50),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(56),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_body, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_body, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_body_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_datatype_body_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_body_repeat1, 2), SHIFT_REPEAT(62),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_body, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_body, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2), SHIFT_REPEAT(48),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_head, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 2, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 3, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 6, .production_id = 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 6, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [183] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
