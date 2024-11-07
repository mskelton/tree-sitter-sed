#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_s = 1,
  sym_delete_command = 2,
  sym_print_command = 3,
  anon_sym_SLASH = 4,
  aux_sym_regex_token1 = 5,
  aux_sym_substitute_flags_token1 = 6,
  sym_number = 7,
  sym_script = 8,
  sym_command = 9,
  sym_address = 10,
  sym_substitute_command = 11,
  sym_regex = 12,
  sym_replacement = 13,
  sym_substitute_flags = 14,
  aux_sym_script_repeat1 = 15,
  aux_sym_substitute_flags_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_s] = "s",
  [sym_delete_command] = "delete_command",
  [sym_print_command] = "print_command",
  [anon_sym_SLASH] = "/",
  [aux_sym_regex_token1] = "regex_token1",
  [aux_sym_substitute_flags_token1] = "substitute_flags_token1",
  [sym_number] = "number",
  [sym_script] = "script",
  [sym_command] = "command",
  [sym_address] = "address",
  [sym_substitute_command] = "substitute_command",
  [sym_regex] = "regex",
  [sym_replacement] = "replacement",
  [sym_substitute_flags] = "substitute_flags",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_substitute_flags_repeat1] = "substitute_flags_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_s] = anon_sym_s,
  [sym_delete_command] = sym_delete_command,
  [sym_print_command] = sym_print_command,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_regex_token1] = aux_sym_regex_token1,
  [aux_sym_substitute_flags_token1] = aux_sym_substitute_flags_token1,
  [sym_number] = sym_number,
  [sym_script] = sym_script,
  [sym_command] = sym_command,
  [sym_address] = sym_address,
  [sym_substitute_command] = sym_substitute_command,
  [sym_regex] = sym_regex,
  [sym_replacement] = sym_replacement,
  [sym_substitute_flags] = sym_substitute_flags,
  [aux_sym_script_repeat1] = aux_sym_script_repeat1,
  [aux_sym_substitute_flags_repeat1] = aux_sym_substitute_flags_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [sym_delete_command] = {
    .visible = true,
    .named = true,
  },
  [sym_print_command] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regex_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_substitute_flags_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_substitute_command] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_replacement] = {
    .visible = true,
    .named = true,
  },
  [sym_substitute_flags] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_substitute_flags_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_flags = 1,
  field_pattern = 2,
  field_replacement = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_flags] = "flags",
  [field_pattern] = "pattern",
  [field_replacement] = "replacement",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pattern, 1},
    {field_replacement, 2},
  [2] =
    {field_flags, 3},
    {field_pattern, 1},
    {field_replacement, 2},
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
  [18] = 12,
  [19] = 17,
  [20] = 15,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead == 's') ADVANCE(3);
      if (lookahead == 'g' ||
          lookahead == 'i') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 1:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_delete_command);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_print_command);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_substitute_flags_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [sym_delete_command] = ACTIONS(1),
    [sym_print_command] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_substitute_flags_token1] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_script] = STATE(16),
    [sym_command] = STATE(6),
    [sym_substitute_command] = STATE(3),
    [aux_sym_script_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_s] = ACTIONS(5),
    [sym_delete_command] = ACTIONS(7),
    [sym_print_command] = ACTIONS(7),
  },
  [2] = {
    [sym_substitute_flags] = STATE(9),
    [aux_sym_substitute_flags_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_s] = ACTIONS(9),
    [sym_delete_command] = ACTIONS(9),
    [sym_print_command] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(9),
    [aux_sym_substitute_flags_token1] = ACTIONS(11),
    [sym_number] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      sym_number,
    STATE(10), 1,
      sym_regex,
    STATE(11), 1,
      sym_address,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_s,
      sym_delete_command,
      sym_print_command,
  [19] = 3,
    ACTIONS(21), 1,
      aux_sym_substitute_flags_token1,
    STATE(4), 1,
      aux_sym_substitute_flags_repeat1,
    ACTIONS(19), 6,
      ts_builtin_sym_end,
      anon_sym_s,
      sym_delete_command,
      sym_print_command,
      anon_sym_SLASH,
      sym_number,
  [34] = 3,
    ACTIONS(26), 1,
      aux_sym_substitute_flags_token1,
    STATE(4), 1,
      aux_sym_substitute_flags_repeat1,
    ACTIONS(24), 6,
      ts_builtin_sym_end,
      anon_sym_s,
      sym_delete_command,
      sym_print_command,
      anon_sym_SLASH,
      sym_number,
  [49] = 5,
    ACTIONS(5), 1,
      anon_sym_s,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_substitute_command,
    ACTIONS(7), 2,
      sym_delete_command,
      sym_print_command,
    STATE(7), 2,
      sym_command,
      aux_sym_script_repeat1,
  [67] = 5,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_s,
    STATE(3), 1,
      sym_substitute_command,
    ACTIONS(35), 2,
      sym_delete_command,
      sym_print_command,
    STATE(7), 2,
      sym_command,
      aux_sym_script_repeat1,
  [85] = 2,
    ACTIONS(40), 1,
      aux_sym_substitute_flags_token1,
    ACTIONS(38), 6,
      ts_builtin_sym_end,
      anon_sym_s,
      sym_delete_command,
      sym_print_command,
      anon_sym_SLASH,
      sym_number,
  [97] = 1,
    ACTIONS(42), 6,
      ts_builtin_sym_end,
      anon_sym_s,
      sym_delete_command,
      sym_print_command,
      anon_sym_SLASH,
      sym_number,
  [106] = 1,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      anon_sym_s,
      sym_delete_command,
      sym_print_command,
  [113] = 1,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_s,
      sym_delete_command,
      sym_print_command,
  [120] = 1,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_s,
      sym_delete_command,
      sym_print_command,
  [127] = 2,
    ACTIONS(50), 1,
      anon_sym_SLASH,
    STATE(14), 1,
      sym_regex,
  [134] = 2,
    ACTIONS(52), 1,
      aux_sym_regex_token1,
    STATE(2), 1,
      sym_replacement,
  [141] = 1,
    ACTIONS(54), 1,
      aux_sym_regex_token1,
  [145] = 1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
  [149] = 1,
    ACTIONS(58), 1,
      anon_sym_SLASH,
  [153] = 1,
    ACTIONS(48), 1,
      aux_sym_regex_token1,
  [157] = 1,
    ACTIONS(60), 1,
      anon_sym_SLASH,
  [161] = 1,
    ACTIONS(62), 1,
      aux_sym_regex_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 19,
  [SMALL_STATE(5)] = 34,
  [SMALL_STATE(6)] = 49,
  [SMALL_STATE(7)] = 67,
  [SMALL_STATE(8)] = 85,
  [SMALL_STATE(9)] = 97,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 113,
  [SMALL_STATE(12)] = 120,
  [SMALL_STATE(13)] = 127,
  [SMALL_STATE(14)] = 134,
  [SMALL_STATE(15)] = 141,
  [SMALL_STATE(16)] = 145,
  [SMALL_STATE(17)] = 149,
  [SMALL_STATE(18)] = 153,
  [SMALL_STATE(19)] = 157,
  [SMALL_STATE(20)] = 161,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitute_command, 3, 0, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_substitute_flags_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_substitute_flags_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitute_flags, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replacement, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_replacement, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitute_command, 4, 0, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [56] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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

TS_PUBLIC const TSLanguage *tree_sitter_sed(void) {
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
