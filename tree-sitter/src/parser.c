#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_module = 1,
  anon_sym_where = 2,
  sym_module_name = 3,
  anon_sym_EQ = 4,
  sym_identifier = 5,
  anon_sym_PLUS = 6,
  anon_sym_DASH = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  sym_source_file = 10,
  sym_module_declaration = 11,
  sym_top_level_declarations = 12,
  sym_function_declaration = 13,
  sym_expression = 14,
  sym_binary_operation = 15,
  aux_sym_top_level_declarations_repeat1 = 16,
  aux_sym_function_declaration_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [sym_module_name] = "module_name",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [sym_source_file] = "source_file",
  [sym_module_declaration] = "module_declaration",
  [sym_top_level_declarations] = "top_level_declarations",
  [sym_function_declaration] = "function_declaration",
  [sym_expression] = "expression",
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
  [sym_identifier] = sym_identifier,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_source_file] = sym_source_file,
  [sym_module_declaration] = sym_module_declaration,
  [sym_top_level_declarations] = sym_top_level_declarations,
  [sym_function_declaration] = sym_function_declaration,
  [sym_expression] = sym_expression,
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
  [sym_expression] = {
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
  field_body = 1,
  field_head = 2,
  field_parameters = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_head] = "head",
  [field_parameters] = "parameters",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_head, 0},
  [2] =
    {field_body, 3},
    {field_head, 0},
    {field_parameters, 1},
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'w') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 10:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_module_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [sym_module_name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym_module_declaration] = STATE(10),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 6,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [9] = 2,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(5), 5,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
  [20] = 3,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(5), 4,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
  [33] = 4,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(5), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_PLUS,
  [48] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_PLUS,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [65] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_PLUS,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [82] = 1,
    ACTIONS(19), 6,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [91] = 3,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(9), 2,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [102] = 3,
    ACTIONS(26), 1,
      sym_identifier,
    STATE(23), 1,
      sym_top_level_declarations,
    STATE(11), 2,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [113] = 3,
    ACTIONS(26), 1,
      sym_identifier,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_function_declaration,
      aux_sym_top_level_declarations_repeat1,
  [124] = 3,
    ACTIONS(30), 1,
      anon_sym_EQ,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym_function_declaration_repeat1,
  [134] = 3,
    ACTIONS(34), 1,
      anon_sym_EQ,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_function_declaration_repeat1,
  [144] = 3,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(6), 1,
      sym_expression,
    STATE(8), 1,
      sym_binary_operation,
  [154] = 3,
    ACTIONS(40), 1,
      anon_sym_EQ,
    ACTIONS(42), 1,
      sym_identifier,
    STATE(15), 1,
      aux_sym_function_declaration_repeat1,
  [164] = 3,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(5), 1,
      sym_expression,
    STATE(8), 1,
      sym_binary_operation,
  [174] = 3,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(4), 1,
      sym_expression,
    STATE(8), 1,
      sym_binary_operation,
  [184] = 3,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(3), 1,
      sym_expression,
    STATE(8), 1,
      sym_binary_operation,
  [194] = 3,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(2), 1,
      sym_expression,
    STATE(8), 1,
      sym_binary_operation,
  [204] = 3,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(7), 1,
      sym_expression,
    STATE(8), 1,
      sym_binary_operation,
  [214] = 1,
    ACTIONS(45), 1,
      sym_module_name,
  [218] = 1,
    ACTIONS(47), 1,
      sym_identifier,
  [222] = 1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
  [226] = 1,
    ACTIONS(51), 1,
      anon_sym_where,
  [230] = 1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 9,
  [SMALL_STATE(4)] = 20,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 65,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 91,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 113,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 134,
  [SMALL_STATE(14)] = 144,
  [SMALL_STATE(15)] = 154,
  [SMALL_STATE(16)] = 164,
  [SMALL_STATE(17)] = 174,
  [SMALL_STATE(18)] = 184,
  [SMALL_STATE(19)] = 194,
  [SMALL_STATE(20)] = 204,
  [SMALL_STATE(21)] = 214,
  [SMALL_STATE(22)] = 218,
  [SMALL_STATE(23)] = 222,
  [SMALL_STATE(24)] = 226,
  [SMALL_STATE(25)] = 230,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_level_declarations_repeat1, 2), SHIFT_REPEAT(12),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level_declarations, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2), SHIFT_REPEAT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
