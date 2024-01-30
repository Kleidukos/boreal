#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
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
  anon_sym_let = 7,
  anon_sym_in = 8,
  anon_sym_case = 9,
  anon_sym_of = 10,
  anon_sym_DASH_GT = 11,
  sym_identifier = 12,
  sym_constructor = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_STAR = 16,
  anon_sym_SLASH = 17,
  sym_source_file = 18,
  sym_module_declaration = 19,
  sym_top_level_declarations = 20,
  sym_datatype_declaration = 21,
  sym_datatype_head = 22,
  sym_datatype_body = 23,
  sym_function_declaration = 24,
  sym_function_head = 25,
  sym_function_body = 26,
  sym_simple_expression = 27,
  sym_let_binding = 28,
  sym_case_expression = 29,
  sym_alternatives = 30,
  sym_alternative = 31,
  sym_pattern = 32,
  sym_binary_operation = 33,
  aux_sym_top_level_declarations_repeat1 = 34,
  aux_sym_datatype_head_repeat1 = 35,
  aux_sym_datatype_body_repeat1 = 36,
  aux_sym_case_expression_repeat1 = 37,
  aux_sym_alternatives_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [sym_module_name] = "module_name",
  [anon_sym_EQ] = "=",
  [anon_sym_type] = "type",
  [anon_sym_PIPE] = "|",
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
  [14] = 7,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 6,
  [19] = 8,
  [20] = 10,
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
  [32] = 29,
  [33] = 33,
  [34] = 34,
  [35] = 31,
  [36] = 36,
  [37] = 34,
  [38] = 38,
  [39] = 33,
  [40] = 40,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_module_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 56:
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
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
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
    [sym_source_file] = STATE(67),
    [sym_module_declaration] = STATE(3),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      anon_sym_case,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_constructor,
    STATE(7), 1,
      sym_binary_operation,
    STATE(12), 1,
      sym_simple_expression,
    STATE(44), 1,
      sym_case_expression,
    STATE(48), 1,
      sym_let_binding,
    STATE(53), 1,
      sym_function_body,
  [28] = 7,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym_datatype_head_repeat1,
    STATE(58), 1,
      sym_function_head,
    STATE(59), 1,
      sym_datatype_head,
    STATE(64), 1,
      sym_top_level_declarations,
    STATE(4), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [52] = 7,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      aux_sym_datatype_head_repeat1,
    STATE(58), 1,
      sym_function_head,
    STATE(59), 1,
      sym_datatype_head,
    STATE(5), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [76] = 7,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_type,
    ACTIONS(24), 1,
      sym_identifier,
    STATE(43), 1,
      aux_sym_datatype_head_repeat1,
    STATE(58), 1,
      sym_function_head,
    STATE(59), 1,
      sym_datatype_head,
    STATE(5), 3,
      sym_datatype_declaration,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [100] = 5,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(29), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
  [119] = 2,
    ACTIONS(39), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(37), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [132] = 4,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(29), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
  [149] = 6,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(43), 2,
      anon_sym_type,
      sym_identifier,
  [170] = 3,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(29), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [185] = 2,
    ACTIONS(29), 2,
      anon_sym_type,
      sym_identifier,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [198] = 6,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 2,
      anon_sym_type,
      sym_identifier,
  [218] = 6,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_PLUS,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 2,
      anon_sym_type,
      sym_identifier,
  [238] = 1,
    ACTIONS(37), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [247] = 1,
    ACTIONS(27), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [256] = 4,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    ACTIONS(57), 2,
      anon_sym_type,
      sym_identifier,
    STATE(17), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [271] = 4,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(63), 2,
      anon_sym_type,
      sym_identifier,
    STATE(17), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [286] = 4,
    ACTIONS(68), 1,
      anon_sym_DASH,
    ACTIONS(70), 1,
      anon_sym_STAR,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    ACTIONS(27), 3,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
  [301] = 3,
    ACTIONS(70), 1,
      anon_sym_STAR,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    ACTIONS(27), 4,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
  [314] = 2,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    ACTIONS(27), 5,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [325] = 4,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(76), 2,
      anon_sym_type,
      sym_identifier,
  [339] = 5,
    ACTIONS(68), 1,
      anon_sym_DASH,
    ACTIONS(70), 1,
      anon_sym_STAR,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    ACTIONS(80), 1,
      anon_sym_in,
    ACTIONS(82), 1,
      anon_sym_PLUS,
  [355] = 4,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    STATE(26), 1,
      aux_sym_datatype_body_repeat1,
    ACTIONS(86), 2,
      anon_sym_type,
      sym_identifier,
  [369] = 4,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(92), 2,
      anon_sym_type,
      sym_identifier,
  [383] = 4,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(96), 2,
      anon_sym_type,
      sym_identifier,
  [397] = 4,
    ACTIONS(88), 1,
      anon_sym_PIPE,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      aux_sym_datatype_body_repeat1,
    ACTIONS(103), 2,
      anon_sym_type,
      sym_identifier,
  [411] = 4,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_PIPE,
    STATE(27), 1,
      aux_sym_datatype_body_repeat1,
    ACTIONS(107), 2,
      anon_sym_type,
      sym_identifier,
  [425] = 5,
    ACTIONS(68), 1,
      anon_sym_DASH,
    ACTIONS(70), 1,
      anon_sym_STAR,
    ACTIONS(72), 1,
      anon_sym_SLASH,
    ACTIONS(82), 1,
      anon_sym_PLUS,
    ACTIONS(112), 1,
      anon_sym_of,
  [441] = 3,
    STATE(7), 1,
      sym_binary_operation,
    STATE(10), 1,
      sym_simple_expression,
    ACTIONS(11), 2,
      sym_identifier,
      sym_constructor,
  [452] = 3,
    STATE(7), 1,
      sym_binary_operation,
    STATE(13), 1,
      sym_simple_expression,
    ACTIONS(11), 2,
      sym_identifier,
      sym_constructor,
  [463] = 3,
    STATE(14), 1,
      sym_binary_operation,
    STATE(15), 1,
      sym_simple_expression,
    ACTIONS(114), 2,
      sym_identifier,
      sym_constructor,
  [474] = 3,
    STATE(14), 1,
      sym_binary_operation,
    STATE(20), 1,
      sym_simple_expression,
    ACTIONS(114), 2,
      sym_identifier,
      sym_constructor,
  [485] = 3,
    STATE(6), 1,
      sym_simple_expression,
    STATE(7), 1,
      sym_binary_operation,
    ACTIONS(11), 2,
      sym_identifier,
      sym_constructor,
  [496] = 3,
    STATE(7), 1,
      sym_binary_operation,
    STATE(8), 1,
      sym_simple_expression,
    ACTIONS(11), 2,
      sym_identifier,
      sym_constructor,
  [507] = 3,
    STATE(7), 1,
      sym_binary_operation,
    STATE(11), 1,
      sym_simple_expression,
    ACTIONS(11), 2,
      sym_identifier,
      sym_constructor,
  [518] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(107), 2,
      anon_sym_type,
      sym_identifier,
  [527] = 3,
    STATE(14), 1,
      sym_binary_operation,
    STATE(19), 1,
      sym_simple_expression,
    ACTIONS(114), 2,
      sym_identifier,
      sym_constructor,
  [538] = 3,
    STATE(14), 1,
      sym_binary_operation,
    STATE(22), 1,
      sym_simple_expression,
    ACTIONS(114), 2,
      sym_identifier,
      sym_constructor,
  [549] = 3,
    STATE(14), 1,
      sym_binary_operation,
    STATE(18), 1,
      sym_simple_expression,
    ACTIONS(114), 2,
      sym_identifier,
      sym_constructor,
  [560] = 2,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_PIPE,
    ACTIONS(96), 2,
      anon_sym_type,
      sym_identifier,
  [569] = 3,
    STATE(7), 1,
      sym_binary_operation,
    STATE(9), 1,
      sym_simple_expression,
    ACTIONS(11), 2,
      sym_identifier,
      sym_constructor,
  [580] = 3,
    STATE(14), 1,
      sym_binary_operation,
    STATE(28), 1,
      sym_simple_expression,
    ACTIONS(114), 2,
      sym_identifier,
      sym_constructor,
  [591] = 3,
    ACTIONS(116), 1,
      anon_sym_EQ,
    ACTIONS(118), 1,
      sym_identifier,
    STATE(49), 1,
      aux_sym_datatype_head_repeat1,
  [601] = 2,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 2,
      anon_sym_type,
      sym_identifier,
  [609] = 3,
    ACTIONS(124), 1,
      sym_constructor,
    STATE(21), 1,
      sym_alternative,
    STATE(56), 1,
      sym_pattern,
  [619] = 3,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_EQ,
    STATE(49), 1,
      aux_sym_datatype_head_repeat1,
  [629] = 2,
    ACTIONS(59), 1,
      anon_sym_PIPE,
    STATE(16), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [637] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 2,
      anon_sym_type,
      sym_identifier,
  [645] = 3,
    ACTIONS(128), 1,
      anon_sym_EQ,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(49), 1,
      aux_sym_datatype_head_repeat1,
  [655] = 2,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 2,
      anon_sym_type,
      sym_identifier,
  [663] = 3,
    ACTIONS(137), 1,
      anon_sym_EQ,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(46), 1,
      aux_sym_datatype_head_repeat1,
  [673] = 3,
    ACTIONS(124), 1,
      sym_constructor,
    STATE(40), 1,
      sym_alternative,
    STATE(56), 1,
      sym_pattern,
  [683] = 2,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 2,
      anon_sym_type,
      sym_identifier,
  [691] = 2,
    ACTIONS(145), 1,
      sym_constructor,
    STATE(50), 1,
      sym_datatype_body,
  [698] = 1,
    ACTIONS(147), 2,
      anon_sym_type,
      sym_identifier,
  [703] = 1,
    ACTIONS(149), 1,
      anon_sym_DASH_GT,
  [707] = 1,
    ACTIONS(151), 1,
      sym_identifier,
  [711] = 1,
    ACTIONS(153), 1,
      anon_sym_EQ,
  [715] = 1,
    ACTIONS(155), 1,
      anon_sym_EQ,
  [719] = 1,
    ACTIONS(157), 1,
      sym_constructor,
  [723] = 1,
    ACTIONS(159), 1,
      anon_sym_DASH_GT,
  [727] = 1,
    ACTIONS(161), 1,
      sym_module_name,
  [731] = 1,
    ACTIONS(163), 1,
      anon_sym_EQ,
  [735] = 1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
  [739] = 1,
    ACTIONS(167), 1,
      sym_constructor,
  [743] = 1,
    ACTIONS(169), 1,
      anon_sym_where,
  [747] = 1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 185,
  [SMALL_STATE(12)] = 198,
  [SMALL_STATE(13)] = 218,
  [SMALL_STATE(14)] = 238,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 256,
  [SMALL_STATE(17)] = 271,
  [SMALL_STATE(18)] = 286,
  [SMALL_STATE(19)] = 301,
  [SMALL_STATE(20)] = 314,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 339,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 369,
  [SMALL_STATE(25)] = 383,
  [SMALL_STATE(26)] = 397,
  [SMALL_STATE(27)] = 411,
  [SMALL_STATE(28)] = 425,
  [SMALL_STATE(29)] = 441,
  [SMALL_STATE(30)] = 452,
  [SMALL_STATE(31)] = 463,
  [SMALL_STATE(32)] = 474,
  [SMALL_STATE(33)] = 485,
  [SMALL_STATE(34)] = 496,
  [SMALL_STATE(35)] = 507,
  [SMALL_STATE(36)] = 518,
  [SMALL_STATE(37)] = 527,
  [SMALL_STATE(38)] = 538,
  [SMALL_STATE(39)] = 549,
  [SMALL_STATE(40)] = 560,
  [SMALL_STATE(41)] = 569,
  [SMALL_STATE(42)] = 580,
  [SMALL_STATE(43)] = 591,
  [SMALL_STATE(44)] = 601,
  [SMALL_STATE(45)] = 609,
  [SMALL_STATE(46)] = 619,
  [SMALL_STATE(47)] = 629,
  [SMALL_STATE(48)] = 637,
  [SMALL_STATE(49)] = 645,
  [SMALL_STATE(50)] = 655,
  [SMALL_STATE(51)] = 663,
  [SMALL_STATE(52)] = 673,
  [SMALL_STATE(53)] = 683,
  [SMALL_STATE(54)] = 691,
  [SMALL_STATE(55)] = 698,
  [SMALL_STATE(56)] = 703,
  [SMALL_STATE(57)] = 707,
  [SMALL_STATE(58)] = 711,
  [SMALL_STATE(59)] = 715,
  [SMALL_STATE(60)] = 719,
  [SMALL_STATE(61)] = 723,
  [SMALL_STATE(62)] = 727,
  [SMALL_STATE(63)] = 731,
  [SMALL_STATE(64)] = 735,
  [SMALL_STATE(65)] = 739,
  [SMALL_STATE(66)] = 743,
  [SMALL_STATE(67)] = 747,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declarations, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(65),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(43),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_expression, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3, .production_id = 6),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative, 3, .production_id = 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 6, .production_id = 5),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_binding, 6, .production_id = 5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, .production_id = 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_expression, 4, .production_id = 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2), SHIFT_REPEAT(45),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_body, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_body, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternatives, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(52),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_body, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_body, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_body_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_datatype_body_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_body_repeat1, 2), SHIFT_REPEAT(60),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_head, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, .production_id = 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body, 1, .production_id = 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 3, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datatype_head_repeat1, 2), SHIFT_REPEAT(49),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datatype_declaration, 3, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype_head, 2, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_declaration, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [171] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
