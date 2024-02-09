#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

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
  sym_simple_expression = 29,
  sym_let_binding = 30,
  sym_case_expression = 31,
  sym_alternatives = 32,
  sym_alternative = 33,
  sym_pattern = 34,
  sym_binary_operation = 35,
  aux_sym_top_level_declarations_repeat1 = 36,
  aux_sym_datatype_head_repeat1 = 37,
  aux_sym_datatype_body_repeat1 = 38,
  aux_sym_case_expression_repeat1 = 39,
  aux_sym_alternatives_repeat1 = 40,
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
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
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
    {field_alternatives, 3},
    {field_conditional, 1},
  [6] =
    {field_binding_body, 5},
    {field_binding_name, 1},
    {field_binding_value, 3},
  [9] =
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
  [15] = 8,
  [16] = 9,
  [17] = 10,
  [18] = 11,
  [19] = 19,
  [20] = 20,
  [21] = 5,
  [22] = 7,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 23,
  [30] = 30,
  [31] = 31,
  [32] = 27,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 30,
  [37] = 28,
  [38] = 38,
  [39] = 39,
  [40] = 25,
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
      if (eof) ADVANCE(29);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(15);
      if (lookahead == '|') ADVANCE(36);
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
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(45);
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
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(41);
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
      if (lookahead == 't') ADVANCE(39);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
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
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 60:
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
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 28},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 25},
  [73] = {.lex_state = 3},
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
    [sym_source_file] = STATE(71),
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
    STATE(11), 1,
      sym_binary_operation,
    STATE(13), 1,
      sym_simple_expression,
    STATE(49), 1,
      sym_case_expression,
    STATE(50), 1,
      sym_function_body,
    STATE(52), 1,
      sym_let_binding,
  [31] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(59), 1,
      aux_sym_datatype_head_repeat1,
    STATE(67), 1,
      sym_datatype_head,
    STATE(70), 1,
      sym_function_head,
    STATE(6), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [55] = 7,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(59), 1,
      aux_sym_datatype_head_repeat1,
    STATE(67), 1,
      sym_datatype_head,
    STATE(68), 1,
      sym_top_level_declarations,
    STATE(70), 1,
      sym_function_head,
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
  [93] = 7,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(59), 1,
      aux_sym_datatype_head_repeat1,
    STATE(67), 1,
      sym_datatype_head,
    STATE(70), 1,
      sym_function_head,
    STATE(6), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [117] = 3,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(21), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [133] = 4,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(23), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
  [151] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(23), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [171] = 2,
    ACTIONS(41), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [185] = 2,
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
  [199] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(49), 2,
      anon_sym_type,
      sym_identifier,
  [220] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 2,
      anon_sym_type,
      sym_identifier,
  [240] = 6,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 2,
      anon_sym_type,
      sym_identifier,
  [260] = 3,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(21), 4,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
  [273] = 4,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(21), 3,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
  [288] = 1,
    ACTIONS(39), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [297] = 1,
    ACTIONS(43), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [306] = 4,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(69), 2,
      anon_sym_type,
      sym_identifier,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [321] = 4,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    ACTIONS(76), 2,
      anon_sym_type,
      sym_identifier,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [336] = 1,
    ACTIONS(21), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [345] = 2,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(21), 5,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [356] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_simple_expression,
    STATE(11), 1,
      sym_binary_operation,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [370] = 5,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(80), 1,
      anon_sym_in,
    ACTIONS(82), 1,
      anon_sym_PLUS,
  [386] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_binary_operation,
    STATE(27), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [400] = 4,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_binary_operation,
    STATE(34), 1,
      sym_simple_expression,
    ACTIONS(86), 2,
      sym_identifier,
      sym_constructor,
  [414] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
  [430] = 4,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_binary_operation,
    STATE(21), 1,
      sym_simple_expression,
    ACTIONS(86), 2,
      sym_identifier,
      sym_constructor,
  [444] = 4,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_binary_operation,
    STATE(22), 1,
      sym_simple_expression,
    ACTIONS(86), 2,
      sym_identifier,
      sym_constructor,
  [458] = 4,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_simple_expression,
    STATE(18), 1,
      sym_binary_operation,
    ACTIONS(86), 2,
      sym_identifier,
      sym_constructor,
  [472] = 4,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym_datatype_body_repeat1,
    ACTIONS(92), 2,
      anon_sym_type,
      sym_identifier,
  [486] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      anon_sym_DASH,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
  [502] = 4,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_simple_expression,
    STATE(18), 1,
      sym_binary_operation,
    ACTIONS(86), 2,
      sym_identifier,
      sym_constructor,
  [516] = 5,
    ACTIONS(61), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_SLASH,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(82), 1,
      anon_sym_PLUS,
    ACTIONS(98), 1,
      anon_sym_of,
  [532] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_simple_expression,
    STATE(11), 1,
      sym_binary_operation,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [546] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_simple_expression,
    STATE(11), 1,
      sym_binary_operation,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [560] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_simple_expression,
    STATE(11), 1,
      sym_binary_operation,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [574] = 4,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      anon_sym_PIPE,
    STATE(38), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(102), 2,
      anon_sym_type,
      sym_identifier,
  [588] = 4,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym_datatype_body_repeat1,
    ACTIONS(109), 2,
      anon_sym_type,
      sym_identifier,
  [602] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_binary_operation,
    STATE(32), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [616] = 4,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_binary_operation,
    STATE(24), 1,
      sym_simple_expression,
    ACTIONS(86), 2,
      sym_identifier,
      sym_constructor,
  [630] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_binary_operation,
    STATE(12), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [644] = 4,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_PIPE,
    STATE(38), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(116), 2,
      anon_sym_type,
      sym_identifier,
  [658] = 4,
    ACTIONS(94), 1,
      anon_sym_PIPE,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      aux_sym_datatype_body_repeat1,
    ACTIONS(122), 2,
      anon_sym_type,
      sym_identifier,
  [672] = 4,
    ACTIONS(118), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(126), 2,
      anon_sym_type,
      sym_identifier,
  [686] = 4,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_binary_operation,
    STATE(14), 1,
      sym_simple_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_constructor,
  [700] = 2,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(102), 2,
      anon_sym_type,
      sym_identifier,
  [709] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(109), 2,
      anon_sym_type,
      sym_identifier,
  [718] = 2,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 2,
      anon_sym_type,
      sym_identifier,
  [726] = 2,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 2,
      anon_sym_type,
      sym_identifier,
  [734] = 3,
    ACTIONS(136), 1,
      anon_sym_EQ,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(51), 1,
      aux_sym_datatype_head_repeat1,
  [744] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 2,
      anon_sym_type,
      sym_identifier,
  [752] = 3,
    ACTIONS(141), 1,
      anon_sym_EQ,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(55), 1,
      aux_sym_datatype_head_repeat1,
  [762] = 3,
    ACTIONS(145), 1,
      sym_constructor,
    STATE(47), 1,
      sym_alternative,
    STATE(73), 1,
      sym_pattern,
  [772] = 3,
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(51), 1,
      aux_sym_datatype_head_repeat1,
  [782] = 2,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 2,
      anon_sym_type,
      sym_identifier,
  [790] = 2,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    STATE(20), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [798] = 3,
    ACTIONS(145), 1,
      sym_constructor,
    STATE(45), 1,
      sym_alternative,
    STATE(73), 1,
      sym_pattern,
  [808] = 3,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_EQ,
    STATE(51), 1,
      aux_sym_datatype_head_repeat1,
  [818] = 2,
    ACTIONS(157), 1,
      sym_constructor,
    STATE(56), 1,
      sym_datatype_body,
  [825] = 1,
    ACTIONS(159), 2,
      anon_sym_type,
      sym_identifier,
  [830] = 1,
    ACTIONS(161), 1,
      anon_sym_where,
  [834] = 1,
    ACTIONS(163), 1,
      anon_sym_DASH_GT,
  [838] = 1,
    ACTIONS(165), 1,
      anon_sym_EQ,
  [842] = 1,
    ACTIONS(167), 1,
      sym_constructor,
  [846] = 1,
    ACTIONS(169), 1,
      sym_identifier,
  [850] = 1,
    ACTIONS(171), 1,
      anon_sym_EQ,
  [854] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
  [858] = 1,
    ACTIONS(175), 1,
      sym_constructor,
  [862] = 1,
    ACTIONS(177), 1,
      anon_sym_EQ,
  [866] = 1,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
  [870] = 1,
    ACTIONS(181), 1,
      sym_module_name,
  [874] = 1,
    ACTIONS(183), 1,
      anon_sym_DASH_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 93,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 151,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 185,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 240,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 273,
  [SMALL_STATE(17)] = 288,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 306,
  [SMALL_STATE(20)] = 321,
  [SMALL_STATE(21)] = 336,
  [SMALL_STATE(22)] = 345,
  [SMALL_STATE(23)] = 356,
  [SMALL_STATE(24)] = 370,
  [SMALL_STATE(25)] = 386,
  [SMALL_STATE(26)] = 400,
  [SMALL_STATE(27)] = 414,
  [SMALL_STATE(28)] = 430,
  [SMALL_STATE(29)] = 444,
  [SMALL_STATE(30)] = 458,
  [SMALL_STATE(31)] = 472,
  [SMALL_STATE(32)] = 486,
  [SMALL_STATE(33)] = 502,
  [SMALL_STATE(34)] = 516,
  [SMALL_STATE(35)] = 532,
  [SMALL_STATE(36)] = 546,
  [SMALL_STATE(37)] = 560,
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
  [SMALL_STATE(51)] = 734,
  [SMALL_STATE(52)] = 744,
  [SMALL_STATE(53)] = 752,
  [SMALL_STATE(54)] = 762,
  [SMALL_STATE(55)] = 772,
  [SMALL_STATE(56)] = 782,
  [SMALL_STATE(57)] = 790,
  [SMALL_STATE(58)] = 798,
  [SMALL_STATE(59)] = 808,
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
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declarations, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(69),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(59),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3, .production_id = 6),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative, 3, .production_id = 6),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 6, .production_id = 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 6, .production_id = 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2), SHIFT_REPEAT(58),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, .production_id = 4),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 4, .production_id = 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_body, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_body, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(54),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_body_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_datatype_body_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_body_repeat1, 2), SHIFT_REPEAT(65),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_body, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_body, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1, .production_id = 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2), SHIFT_REPEAT(51),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 2, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 3, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_head, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [179] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
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
