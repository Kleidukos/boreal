#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
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
  anon_sym_DASH_GT = 9,
  sym_identifier = 10,
  sym_constructor = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_STAR = 14,
  anon_sym_SLASH = 15,
  sym_source_file = 16,
  sym_module_declaration = 17,
  sym_top_level_declarations = 18,
  sym_function_declaration = 19,
  sym_function_body = 20,
  sym_expression = 21,
  sym_let_binding = 22,
  sym_case_expression = 23,
  sym_alternatives = 24,
  sym_pattern = 25,
  sym_binary_operation = 26,
  aux_sym_top_level_declarations_repeat1 = 27,
  aux_sym_function_declaration_repeat1 = 28,
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
  [sym_function_declaration] = "function_declaration",
  [sym_function_body] = "function_body",
  [sym_expression] = "expression",
  [sym_let_binding] = "let_binding",
  [sym_case_expression] = "case_expression",
  [sym_alternatives] = "alternatives",
  [sym_pattern] = "pattern",
  [sym_binary_operation] = "binary_operation",
  [aux_sym_top_level_declarations_repeat1] = "top_level_declarations_repeat1",
  [aux_sym_function_declaration_repeat1] = "function_declaration_repeat1",
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
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_body] = sym_function_body,
  [sym_expression] = sym_expression,
  [sym_let_binding] = sym_let_binding,
  [sym_case_expression] = sym_case_expression,
  [sym_alternatives] = sym_alternatives,
  [sym_pattern] = sym_pattern,
  [sym_binary_operation] = sym_binary_operation,
  [aux_sym_top_level_declarations_repeat1] = aux_sym_top_level_declarations_repeat1,
  [aux_sym_function_declaration_repeat1] = aux_sym_function_declaration_repeat1,
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
  [sym_function_declaration] = {
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
  [aux_sym_function_declaration_repeat1] = {
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
  field_pattern = 8,
  field_rhs = 9,
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
    {field_body, 1},
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
  [15] = 7,
  [16] = 16,
  [17] = 9,
  [18] = 4,
  [19] = 5,
  [20] = 6,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 25,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 24,
  [35] = 35,
  [36] = 29,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 31,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(34);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_constructor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 46:
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
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
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
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_constructor] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym_module_declaration] = STATE(14),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      anon_sym_case,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(4), 1,
      sym_binary_operation,
    STATE(11), 1,
      sym_expression,
    STATE(26), 1,
      sym_function_body,
    STATE(33), 2,
      sym_let_binding,
      sym_case_expression,
  [23] = 7,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      anon_sym_case,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(4), 1,
      sym_binary_operation,
    STATE(11), 1,
      sym_expression,
    STATE(38), 1,
      sym_function_body,
    STATE(33), 2,
      sym_let_binding,
      sym_case_expression,
  [46] = 1,
    ACTIONS(11), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [56] = 4,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_PLUS,
  [72] = 3,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(13), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
  [86] = 2,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(13), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [98] = 6,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      anon_sym_case,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(4), 1,
      sym_binary_operation,
    STATE(10), 1,
      sym_expression,
    STATE(41), 2,
      sym_let_binding,
      sym_case_expression,
  [118] = 1,
    ACTIONS(13), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [128] = 5,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
  [146] = 5,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
  [164] = 5,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH,
    ACTIONS(23), 1,
      anon_sym_PLUS,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
  [182] = 5,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_EQ,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_function_declaration_repeat1,
    STATE(16), 2,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [199] = 5,
    ACTIONS(31), 1,
      anon_sym_EQ,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_function_declaration_repeat1,
    STATE(48), 1,
      sym_top_level_declarations,
    STATE(13), 2,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [216] = 2,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(13), 5,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [227] = 5,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_EQ,
    ACTIONS(42), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_function_declaration_repeat1,
    STATE(16), 2,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [244] = 1,
    ACTIONS(13), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [253] = 1,
    ACTIONS(11), 6,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [262] = 4,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(13), 3,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
  [277] = 3,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(13), 4,
      anon_sym_in,
      anon_sym_of,
      anon_sym_PLUS,
      anon_sym_DASH,
  [290] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      anon_sym_in,
    ACTIONS(51), 1,
      anon_sym_PLUS,
  [306] = 5,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_of,
  [322] = 3,
    STATE(35), 1,
      sym_alternatives,
    STATE(44), 1,
      sym_pattern,
    ACTIONS(55), 2,
      sym_identifier,
      sym_constructor,
  [333] = 3,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(4), 1,
      sym_binary_operation,
    STATE(7), 1,
      sym_expression,
  [343] = 3,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(18), 1,
      sym_binary_operation,
    STATE(19), 1,
      sym_expression,
  [353] = 1,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
  [359] = 3,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(18), 1,
      sym_binary_operation,
    STATE(21), 1,
      sym_expression,
  [369] = 3,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(32), 1,
      aux_sym_function_declaration_repeat1,
  [379] = 3,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(4), 1,
      sym_binary_operation,
    STATE(6), 1,
      sym_expression,
  [389] = 3,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(4), 1,
      sym_binary_operation,
    STATE(5), 1,
      sym_expression,
  [399] = 3,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(17), 1,
      sym_expression,
    STATE(18), 1,
      sym_binary_operation,
  [409] = 3,
    ACTIONS(67), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(32), 1,
      aux_sym_function_declaration_repeat1,
  [419] = 1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
  [425] = 3,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(15), 1,
      sym_expression,
    STATE(18), 1,
      sym_binary_operation,
  [435] = 1,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
  [441] = 3,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(18), 1,
      sym_binary_operation,
    STATE(20), 1,
      sym_expression,
  [451] = 3,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(4), 1,
      sym_binary_operation,
    STATE(12), 1,
      sym_expression,
  [461] = 1,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
  [467] = 3,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(18), 1,
      sym_binary_operation,
    STATE(22), 1,
      sym_expression,
  [477] = 3,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(4), 1,
      sym_binary_operation,
    STATE(9), 1,
      sym_expression,
  [487] = 1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
  [493] = 1,
    ACTIONS(76), 2,
      anon_sym_EQ,
      sym_identifier,
  [498] = 1,
    ACTIONS(78), 1,
      sym_identifier,
  [502] = 1,
    ACTIONS(80), 1,
      anon_sym_DASH_GT,
  [506] = 1,
    ACTIONS(82), 1,
      anon_sym_DASH_GT,
  [510] = 1,
    ACTIONS(84), 1,
      anon_sym_EQ,
  [514] = 1,
    ACTIONS(86), 1,
      sym_module_name,
  [518] = 1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
  [522] = 1,
    ACTIONS(90), 1,
      anon_sym_where,
  [526] = 1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 86,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 118,
  [SMALL_STATE(10)] = 128,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 164,
  [SMALL_STATE(13)] = 182,
  [SMALL_STATE(14)] = 199,
  [SMALL_STATE(15)] = 216,
  [SMALL_STATE(16)] = 227,
  [SMALL_STATE(17)] = 244,
  [SMALL_STATE(18)] = 253,
  [SMALL_STATE(19)] = 262,
  [SMALL_STATE(20)] = 277,
  [SMALL_STATE(21)] = 290,
  [SMALL_STATE(22)] = 306,
  [SMALL_STATE(23)] = 322,
  [SMALL_STATE(24)] = 333,
  [SMALL_STATE(25)] = 343,
  [SMALL_STATE(26)] = 353,
  [SMALL_STATE(27)] = 359,
  [SMALL_STATE(28)] = 369,
  [SMALL_STATE(29)] = 379,
  [SMALL_STATE(30)] = 389,
  [SMALL_STATE(31)] = 399,
  [SMALL_STATE(32)] = 409,
  [SMALL_STATE(33)] = 419,
  [SMALL_STATE(34)] = 425,
  [SMALL_STATE(35)] = 435,
  [SMALL_STATE(36)] = 441,
  [SMALL_STATE(37)] = 451,
  [SMALL_STATE(38)] = 461,
  [SMALL_STATE(39)] = 467,
  [SMALL_STATE(40)] = 477,
  [SMALL_STATE(41)] = 487,
  [SMALL_STATE(42)] = 493,
  [SMALL_STATE(43)] = 498,
  [SMALL_STATE(44)] = 502,
  [SMALL_STATE(45)] = 506,
  [SMALL_STATE(46)] = 510,
  [SMALL_STATE(47)] = 514,
  [SMALL_STATE(48)] = 518,
  [SMALL_STATE(49)] = 522,
  [SMALL_STATE(50)] = 526,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternatives, 3, .production_id = 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 6, .production_id = 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declarations, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(3),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2), SHIFT_REPEAT(32),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_expression, 4, .production_id = 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [92] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
