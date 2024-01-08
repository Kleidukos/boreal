#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_module = 1,
  anon_sym_where = 2,
  sym_module_name = 3,
  anon_sym_EQ = 4,
  anon_sym_let = 5,
  anon_sym_in = 6,
  anon_sym_case = 7,
  anon_sym_of = 8,
  anon_sym_PIPE = 9,
  anon_sym_DASH_GT = 10,
  sym_identifier = 11,
  sym_constructor = 12,
  anon_sym_PLUS = 13,
  anon_sym_DASH = 14,
  anon_sym_STAR = 15,
  anon_sym_SLASH = 16,
  sym_source_file = 17,
  sym_module_declaration = 18,
  sym_top_level_declarations = 19,
  sym_function_head = 20,
  sym_function_declaration = 21,
  sym_function_body = 22,
  sym_simple_expression = 23,
  sym_let_binding = 24,
  sym_case_expression = 25,
  sym_alternatives = 26,
  sym_alternative = 27,
  sym_pattern = 28,
  sym_binary_operation = 29,
  aux_sym_top_level_declarations_repeat1 = 30,
  aux_sym_function_head_repeat1 = 31,
  aux_sym_case_expression_repeat1 = 32,
  aux_sym_alternatives_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [sym_module_name] = "module_name",
  [anon_sym_EQ] = "=",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_case] = "case",
  [anon_sym_of] = "of",
  [anon_sym_PIPE] = "|",
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
  [sym_function_head] = "function_head",
  [sym_function_declaration] = "function_declaration",
  [sym_function_body] = "function_body",
  [sym_simple_expression] = "simple_expression",
  [sym_let_binding] = "let_binding",
  [sym_case_expression] = "case_expression",
  [sym_alternatives] = "alternatives",
  [sym_alternative] = "alternative",
  [sym_pattern] = "pattern",
  [sym_binary_operation] = "binary_operation",
  [aux_sym_top_level_declarations_repeat1] = "top_level_declarations_repeat1",
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
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_PIPE] = anon_sym_PIPE,
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
  [sym_function_head] = sym_function_head,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_body] = sym_function_body,
  [sym_simple_expression] = sym_simple_expression,
  [sym_let_binding] = sym_let_binding,
  [sym_case_expression] = sym_case_expression,
  [sym_alternatives] = sym_alternatives,
  [sym_alternative] = sym_alternative,
  [sym_pattern] = sym_pattern,
  [sym_binary_operation] = sym_binary_operation,
  [aux_sym_top_level_declarations_repeat1] = aux_sym_top_level_declarations_repeat1,
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
  [anon_sym_PIPE] = {
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
  [sym_function_head] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
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
  [field_case_expression] = "case_expression",
  [field_conditional] = "conditional",
  [field_head] = "head",
  [field_pattern] = "pattern",
  [field_rhs] = "rhs",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_head, 0},
  [2] =
    {field_case_expression, 0},
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
  [9] = 4,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 6,
  [15] = 15,
  [16] = 7,
  [17] = 17,
  [18] = 5,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 25,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 31,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_module_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 47:
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
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 22},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 22},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_constructor] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym_module_declaration] = STATE(17),
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
    STATE(8), 1,
      sym_binary_operation,
    STATE(15), 1,
      sym_simple_expression,
    STATE(44), 1,
      sym_function_body,
    STATE(45), 1,
      sym_let_binding,
    STATE(46), 1,
      sym_case_expression,
  [28] = 5,
    ACTIONS(15), 1,
      anon_sym_PLUS,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_identifier,
  [46] = 3,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
  [60] = 2,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [72] = 1,
    ACTIONS(23), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [82] = 4,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_identifier,
      anon_sym_PLUS,
  [98] = 1,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [108] = 3,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(23), 4,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
  [121] = 1,
    ACTIONS(25), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [130] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(38), 1,
      aux_sym_function_head_repeat1,
    STATE(53), 1,
      sym_function_head,
    STATE(12), 2,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [147] = 5,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(38), 1,
      aux_sym_function_head_repeat1,
    STATE(53), 1,
      sym_function_head,
    STATE(12), 2,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [164] = 5,
    ACTIONS(15), 1,
      anon_sym_PLUS,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [181] = 1,
    ACTIONS(23), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [190] = 5,
    ACTIONS(15), 1,
      anon_sym_PLUS,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [207] = 4,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(23), 3,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
  [222] = 5,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(38), 1,
      aux_sym_function_head_repeat1,
    STATE(53), 1,
      sym_function_head,
    STATE(54), 1,
      sym_top_level_declarations,
    STATE(11), 2,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [239] = 2,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(23), 5,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [250] = 3,
    ACTIONS(48), 1,
      anon_sym_PIPE,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym_identifier,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [262] = 3,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_identifier,
    STATE(19), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [274] = 5,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      anon_sym_in,
    ACTIONS(57), 1,
      anon_sym_PLUS,
  [290] = 5,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_PLUS,
    ACTIONS(59), 1,
      anon_sym_of,
  [306] = 3,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    STATE(34), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [317] = 3,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    STATE(23), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [328] = 3,
    STATE(5), 1,
      sym_simple_expression,
    STATE(8), 1,
      sym_binary_operation,
    ACTIONS(11), 2,
      sym_identifier,
      sym_constructor,
  [339] = 3,
    STATE(6), 1,
      sym_simple_expression,
    STATE(8), 1,
      sym_binary_operation,
    ACTIONS(11), 2,
      sym_identifier,
      sym_constructor,
  [350] = 3,
    STATE(10), 1,
      sym_binary_operation,
    STATE(21), 1,
      sym_simple_expression,
    ACTIONS(67), 2,
      sym_identifier,
      sym_constructor,
  [361] = 3,
    STATE(10), 1,
      sym_binary_operation,
    STATE(14), 1,
      sym_simple_expression,
    ACTIONS(67), 2,
      sym_identifier,
      sym_constructor,
  [372] = 3,
    STATE(10), 1,
      sym_binary_operation,
    STATE(18), 1,
      sym_simple_expression,
    ACTIONS(67), 2,
      sym_identifier,
      sym_constructor,
  [383] = 3,
    STATE(7), 1,
      sym_simple_expression,
    STATE(8), 1,
      sym_binary_operation,
    ACTIONS(11), 2,
      sym_identifier,
      sym_constructor,
  [394] = 3,
    STATE(9), 1,
      sym_simple_expression,
    STATE(10), 1,
      sym_binary_operation,
    ACTIONS(67), 2,
      sym_identifier,
      sym_constructor,
  [405] = 3,
    STATE(10), 1,
      sym_binary_operation,
    STATE(16), 1,
      sym_simple_expression,
    ACTIONS(67), 2,
      sym_identifier,
      sym_constructor,
  [416] = 3,
    STATE(4), 1,
      sym_simple_expression,
    STATE(8), 1,
      sym_binary_operation,
    ACTIONS(11), 2,
      sym_identifier,
      sym_constructor,
  [427] = 3,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    STATE(34), 1,
      aux_sym_alternatives_repeat1,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [438] = 3,
    STATE(3), 1,
      sym_simple_expression,
    STATE(8), 1,
      sym_binary_operation,
    ACTIONS(11), 2,
      sym_identifier,
      sym_constructor,
  [449] = 3,
    STATE(8), 1,
      sym_binary_operation,
    STATE(13), 1,
      sym_simple_expression,
    ACTIONS(11), 2,
      sym_identifier,
      sym_constructor,
  [460] = 3,
    STATE(10), 1,
      sym_binary_operation,
    STATE(22), 1,
      sym_simple_expression,
    ACTIONS(67), 2,
      sym_identifier,
      sym_constructor,
  [471] = 3,
    ACTIONS(74), 1,
      anon_sym_EQ,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(41), 1,
      aux_sym_function_head_repeat1,
  [481] = 2,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    STATE(20), 2,
      sym_alternatives,
      aux_sym_case_expression_repeat1,
  [489] = 3,
    ACTIONS(78), 1,
      sym_constructor,
    STATE(42), 1,
      sym_alternative,
    STATE(47), 1,
      sym_pattern,
  [499] = 3,
    ACTIONS(80), 1,
      anon_sym_EQ,
    ACTIONS(82), 1,
      sym_identifier,
    STATE(41), 1,
      aux_sym_function_head_repeat1,
  [509] = 1,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_identifier,
  [515] = 3,
    ACTIONS(78), 1,
      sym_constructor,
    STATE(24), 1,
      sym_alternative,
    STATE(47), 1,
      sym_pattern,
  [525] = 1,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [530] = 1,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [535] = 1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [540] = 1,
    ACTIONS(89), 1,
      anon_sym_DASH_GT,
  [544] = 1,
    ACTIONS(91), 1,
      sym_identifier,
  [548] = 1,
    ACTIONS(93), 1,
      anon_sym_DASH_GT,
  [552] = 1,
    ACTIONS(95), 1,
      sym_identifier,
  [556] = 1,
    ACTIONS(97), 1,
      anon_sym_EQ,
  [560] = 1,
    ACTIONS(99), 1,
      sym_module_name,
  [564] = 1,
    ACTIONS(101), 1,
      anon_sym_EQ,
  [568] = 1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
  [572] = 1,
    ACTIONS(105), 1,
      anon_sym_where,
  [576] = 1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 108,
  [SMALL_STATE(10)] = 121,
  [SMALL_STATE(11)] = 130,
  [SMALL_STATE(12)] = 147,
  [SMALL_STATE(13)] = 164,
  [SMALL_STATE(14)] = 181,
  [SMALL_STATE(15)] = 190,
  [SMALL_STATE(16)] = 207,
  [SMALL_STATE(17)] = 222,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 250,
  [SMALL_STATE(20)] = 262,
  [SMALL_STATE(21)] = 274,
  [SMALL_STATE(22)] = 290,
  [SMALL_STATE(23)] = 306,
  [SMALL_STATE(24)] = 317,
  [SMALL_STATE(25)] = 328,
  [SMALL_STATE(26)] = 339,
  [SMALL_STATE(27)] = 350,
  [SMALL_STATE(28)] = 361,
  [SMALL_STATE(29)] = 372,
  [SMALL_STATE(30)] = 383,
  [SMALL_STATE(31)] = 394,
  [SMALL_STATE(32)] = 405,
  [SMALL_STATE(33)] = 416,
  [SMALL_STATE(34)] = 427,
  [SMALL_STATE(35)] = 438,
  [SMALL_STATE(36)] = 449,
  [SMALL_STATE(37)] = 460,
  [SMALL_STATE(38)] = 471,
  [SMALL_STATE(39)] = 481,
  [SMALL_STATE(40)] = 489,
  [SMALL_STATE(41)] = 499,
  [SMALL_STATE(42)] = 509,
  [SMALL_STATE(43)] = 515,
  [SMALL_STATE(44)] = 525,
  [SMALL_STATE(45)] = 530,
  [SMALL_STATE(46)] = 535,
  [SMALL_STATE(47)] = 540,
  [SMALL_STATE(48)] = 544,
  [SMALL_STATE(49)] = 548,
  [SMALL_STATE(50)] = 552,
  [SMALL_STATE(51)] = 556,
  [SMALL_STATE(52)] = 560,
  [SMALL_STATE(53)] = 564,
  [SMALL_STATE(54)] = 568,
  [SMALL_STATE(55)] = 572,
  [SMALL_STATE(56)] = 576,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3, .production_id = 5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_expression, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declarations, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(38),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 6, .production_id = 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_expression_repeat1, 2), SHIFT_REPEAT(43),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternatives_repeat1, 2), SHIFT_REPEAT(40),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_head, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_head_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_head_repeat1, 2), SHIFT_REPEAT(41),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [107] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
