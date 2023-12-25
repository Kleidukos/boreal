#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_module = 1,
  anon_sym_where = 2,
  sym_module_name = 3,
  anon_sym_EQ = 4,
  anon_sym_let = 5,
  anon_sym_in = 6,
  sym_identifier = 7,
  anon_sym_PLUS = 8,
  anon_sym_DASH = 9,
  anon_sym_STAR = 10,
  anon_sym_SLASH = 11,
  sym_source_file = 12,
  sym_module_declaration = 13,
  sym_top_level_declarations = 14,
  sym_function_declaration = 15,
  sym_function_body = 16,
  sym_expression = 17,
  sym_let_binding = 18,
  sym_binary_operation = 19,
  aux_sym_top_level_declarations_repeat1 = 20,
  aux_sym_function_declaration_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [sym_module_name] = "module_name",
  [anon_sym_EQ] = "=",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [sym_identifier] = "identifier",
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
  [sym_identifier] = sym_identifier,
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
  [sym_identifier] = {
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
  field_binding_body = 1,
  field_binding_name = 2,
  field_binding_value = 3,
  field_body = 4,
  field_head = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_binding_body] = "binding_body",
  [field_binding_name] = "binding_name",
  [field_binding_value] = "binding_value",
  [field_body] = "body",
  [field_head] = "head",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_body, 2},
    {field_head, 0},
  [3] =
    {field_binding_body, 5},
    {field_binding_name, 1},
    {field_binding_value, 3},
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
  [14] = 4,
  [15] = 6,
  [16] = 7,
  [17] = 8,
  [18] = 3,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
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
  [33] = 32,
  [34] = 20,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(1);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_module_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym_module_declaration] = STATE(9),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_PLUS,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(5), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
  [18] = 1,
    ACTIONS(15), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [28] = 1,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [38] = 5,
    ACTIONS(7), 1,
      anon_sym_PLUS,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
  [56] = 2,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(17), 6,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [68] = 3,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
  [82] = 4,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(13), 1,
      anon_sym_SLASH,
    ACTIONS(17), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
      anon_sym_PLUS,
  [98] = 5,
    ACTIONS(21), 1,
      anon_sym_EQ,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym_function_declaration_repeat1,
    STATE(39), 1,
      sym_top_level_declarations,
    STATE(11), 2,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [115] = 6,
    ACTIONS(25), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(3), 1,
      sym_binary_operation,
    STATE(5), 1,
      sym_expression,
    STATE(29), 1,
      sym_let_binding,
    STATE(30), 1,
      sym_function_body,
  [134] = 5,
    ACTIONS(21), 1,
      anon_sym_EQ,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      aux_sym_function_declaration_repeat1,
    STATE(12), 2,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [151] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_EQ,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym_function_declaration_repeat1,
    STATE(12), 2,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [168] = 6,
    ACTIONS(25), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(3), 1,
      sym_binary_operation,
    STATE(5), 1,
      sym_expression,
    STATE(24), 1,
      sym_function_body,
    STATE(29), 1,
      sym_let_binding,
  [187] = 1,
    ACTIONS(17), 5,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [195] = 2,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(17), 4,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [205] = 3,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_STAR,
    ACTIONS(17), 3,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
  [217] = 4,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_STAR,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(17), 2,
      anon_sym_in,
      anon_sym_PLUS,
  [231] = 1,
    ACTIONS(15), 5,
      anon_sym_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [239] = 5,
    ACTIONS(39), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_STAR,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      anon_sym_in,
    ACTIONS(47), 1,
      anon_sym_PLUS,
  [255] = 3,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(3), 1,
      sym_binary_operation,
    STATE(8), 1,
      sym_expression,
  [265] = 3,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(15), 1,
      sym_expression,
    STATE(18), 1,
      sym_binary_operation,
  [275] = 3,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(3), 1,
      sym_binary_operation,
    STATE(6), 1,
      sym_expression,
  [285] = 3,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(3), 1,
      sym_binary_operation,
    STATE(4), 1,
      sym_expression,
  [295] = 1,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
  [301] = 3,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(18), 1,
      sym_binary_operation,
    STATE(19), 1,
      sym_expression,
  [311] = 3,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_function_declaration_repeat1,
  [321] = 3,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(14), 1,
      sym_expression,
    STATE(18), 1,
      sym_binary_operation,
  [331] = 3,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_function_declaration_repeat1,
  [341] = 1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
  [347] = 1,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_identifier,
  [353] = 3,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expression,
    STATE(3), 1,
      sym_binary_operation,
  [363] = 3,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(3), 1,
      sym_binary_operation,
    STATE(7), 1,
      sym_expression,
  [373] = 3,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(16), 1,
      sym_expression,
    STATE(18), 1,
      sym_binary_operation,
  [383] = 3,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(17), 1,
      sym_expression,
    STATE(18), 1,
      sym_binary_operation,
  [393] = 1,
    ACTIONS(66), 2,
      anon_sym_EQ,
      sym_identifier,
  [398] = 1,
    ACTIONS(68), 1,
      sym_identifier,
  [402] = 1,
    ACTIONS(70), 1,
      anon_sym_EQ,
  [406] = 1,
    ACTIONS(72), 1,
      sym_module_name,
  [410] = 1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
  [414] = 1,
    ACTIONS(76), 1,
      anon_sym_where,
  [418] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 115,
  [SMALL_STATE(11)] = 134,
  [SMALL_STATE(12)] = 151,
  [SMALL_STATE(13)] = 168,
  [SMALL_STATE(14)] = 187,
  [SMALL_STATE(15)] = 195,
  [SMALL_STATE(16)] = 205,
  [SMALL_STATE(17)] = 217,
  [SMALL_STATE(18)] = 231,
  [SMALL_STATE(19)] = 239,
  [SMALL_STATE(20)] = 255,
  [SMALL_STATE(21)] = 265,
  [SMALL_STATE(22)] = 275,
  [SMALL_STATE(23)] = 285,
  [SMALL_STATE(24)] = 295,
  [SMALL_STATE(25)] = 301,
  [SMALL_STATE(26)] = 311,
  [SMALL_STATE(27)] = 321,
  [SMALL_STATE(28)] = 331,
  [SMALL_STATE(29)] = 341,
  [SMALL_STATE(30)] = 347,
  [SMALL_STATE(31)] = 353,
  [SMALL_STATE(32)] = 363,
  [SMALL_STATE(33)] = 373,
  [SMALL_STATE(34)] = 383,
  [SMALL_STATE(35)] = 393,
  [SMALL_STATE(36)] = 398,
  [SMALL_STATE(37)] = 402,
  [SMALL_STATE(38)] = 406,
  [SMALL_STATE(39)] = 410,
  [SMALL_STATE(40)] = 414,
  [SMALL_STATE(41)] = 418,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_binding, 6, .production_id = 3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declarations, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(26),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2), SHIFT_REPEAT(28),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
