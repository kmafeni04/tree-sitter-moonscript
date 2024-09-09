#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_hash_bang_line = 1,
  anon_sym_EQ = 2,
  anon_sym_COMMA = 3,
  anon_sym_PLUS_EQ = 4,
  anon_sym_DASH_EQ = 5,
  anon_sym_STAR_EQ = 6,
  anon_sym_SLASH_EQ = 7,
  anon_sym_PERCENT_EQ = 8,
  anon_sym_and_EQ = 9,
  anon_sym_or_EQ = 10,
  anon_sym_DOT_DOT_EQ = 11,
  aux_sym_identifier_token1 = 12,
  sym__constant_identifier = 13,
  sym_false = 14,
  sym_true = 15,
  sym_nil = 16,
  sym_string = 17,
  sym_number = 18,
  sym_source_file = 19,
  sym_statement = 20,
  sym_assignment_statement = 21,
  sym_variable_list = 22,
  sym_variable = 23,
  sym_update_statement = 24,
  sym__update_operator = 25,
  sym_expression_list = 26,
  sym__expression = 27,
  sym_identifier = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_variable_list_repeat1 = 30,
  aux_sym_expression_list_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_hash_bang_line] = "hash_bang_line",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_and_EQ] = "and=",
  [anon_sym_or_EQ] = "or=",
  [anon_sym_DOT_DOT_EQ] = "..=",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym__constant_identifier] = "_constant_identifier",
  [sym_false] = "false",
  [sym_true] = "true",
  [sym_nil] = "nil",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_variable_list] = "variable_list",
  [sym_variable] = "variable",
  [sym_update_statement] = "update_statement",
  [sym__update_operator] = "_update_operator",
  [sym_expression_list] = "expression_list",
  [sym__expression] = "_expression",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_list_repeat1] = "variable_list_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_hash_bang_line] = sym_hash_bang_line,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_and_EQ] = anon_sym_and_EQ,
  [anon_sym_or_EQ] = anon_sym_or_EQ,
  [anon_sym_DOT_DOT_EQ] = anon_sym_DOT_DOT_EQ,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym__constant_identifier] = sym__constant_identifier,
  [sym_false] = sym_false,
  [sym_true] = sym_true,
  [sym_nil] = sym_nil,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_variable_list] = sym_variable_list,
  [sym_variable] = sym_variable,
  [sym_update_statement] = sym_update_statement,
  [sym__update_operator] = sym__update_operator,
  [sym_expression_list] = sym_expression_list,
  [sym__expression] = sym__expression,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_list_repeat1] = aux_sym_variable_list_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_hash_bang_line] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__constant_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_list] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_update_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__update_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '"', 1,
        '#', 26,
        '%', 3,
        '*', 4,
        '+', 5,
        ',', 28,
        '-', 6,
        '.', 2,
        '/', 7,
        '=', 27,
        'a', 18,
        'f', 11,
        'n', 15,
        'o', 20,
        't', 19,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == ',') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_hash_bang_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_and_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_or_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__constant_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_hash_bang_line] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_and_EQ] = ACTIONS(1),
    [anon_sym_or_EQ] = ACTIONS(1),
    [anon_sym_DOT_DOT_EQ] = ACTIONS(1),
    [sym__constant_identifier] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_statement] = STATE(6),
    [sym_assignment_statement] = STATE(17),
    [sym_variable_list] = STATE(24),
    [sym_variable] = STATE(2),
    [sym_update_statement] = STATE(17),
    [sym_identifier] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_hash_bang_line] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [sym__constant_identifier] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      anon_sym_EQ,
    ACTIONS(14), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      sym__update_operator,
    STATE(18), 1,
      aux_sym_variable_list_repeat1,
    ACTIONS(16), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_and_EQ,
      anon_sym_or_EQ,
      anon_sym_DOT_DOT_EQ,
  [23] = 8,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      aux_sym_identifier_token1,
    ACTIONS(23), 1,
      sym__constant_identifier,
    STATE(2), 1,
      sym_variable,
    STATE(5), 1,
      sym_identifier,
    STATE(24), 1,
      sym_variable_list,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_assignment_statement,
      sym_update_statement,
  [50] = 1,
    ACTIONS(26), 10,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_and_EQ,
      anon_sym_or_EQ,
      anon_sym_DOT_DOT_EQ,
  [63] = 1,
    ACTIONS(28), 10,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_and_EQ,
      anon_sym_or_EQ,
      anon_sym_DOT_DOT_EQ,
  [76] = 8,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      sym__constant_identifier,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_variable,
    STATE(5), 1,
      sym_identifier,
    STATE(24), 1,
      sym_variable_list,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_assignment_statement,
      sym_update_statement,
  [103] = 8,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      sym__constant_identifier,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_variable,
    STATE(5), 1,
      sym_identifier,
    STATE(24), 1,
      sym_variable_list,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_assignment_statement,
      sym_update_statement,
  [130] = 8,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      sym__constant_identifier,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_variable,
    STATE(5), 1,
      sym_identifier,
    STATE(24), 1,
      sym_variable_list,
    STATE(7), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_assignment_statement,
      sym_update_statement,
  [157] = 3,
    STATE(14), 1,
      sym__expression,
    STATE(19), 1,
      sym_expression_list,
    ACTIONS(34), 5,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [171] = 2,
    STATE(20), 1,
      sym__expression,
    ACTIONS(36), 5,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [182] = 2,
    STATE(15), 1,
      sym__expression,
    ACTIONS(38), 5,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [193] = 4,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      sym__constant_identifier,
    STATE(12), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [207] = 4,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      sym__constant_identifier,
    STATE(12), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [221] = 4,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      sym__constant_identifier,
    STATE(13), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [235] = 2,
    ACTIONS(45), 1,
      sym__constant_identifier,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
  [244] = 4,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      sym__constant_identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(22), 1,
      sym_variable,
  [257] = 2,
    ACTIONS(59), 1,
      sym__constant_identifier,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [265] = 3,
    ACTIONS(14), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_EQ,
    STATE(21), 1,
      aux_sym_variable_list_repeat1,
  [275] = 2,
    ACTIONS(65), 1,
      sym__constant_identifier,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [283] = 2,
    ACTIONS(69), 1,
      sym__constant_identifier,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [291] = 3,
    ACTIONS(71), 1,
      anon_sym_EQ,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_variable_list_repeat1,
  [301] = 1,
    ACTIONS(71), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [306] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [310] = 1,
    ACTIONS(78), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 103,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 182,
  [SMALL_STATE(12)] = 193,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 221,
  [SMALL_STATE(15)] = 235,
  [SMALL_STATE(16)] = 244,
  [SMALL_STATE(17)] = 257,
  [SMALL_STATE(18)] = 265,
  [SMALL_STATE(19)] = 275,
  [SMALL_STATE(20)] = 283,
  [SMALL_STATE(21)] = 291,
  [SMALL_STATE(22)] = 301,
  [SMALL_STATE(23)] = 306,
  [SMALL_STATE(24)] = 310,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_list, 1, 0, 0), SHIFT(10),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_statement, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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

TS_PUBLIC const TSLanguage *tree_sitter_moonscript(void) {
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
