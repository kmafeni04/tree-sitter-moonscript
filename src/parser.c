#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  anon_sym_LPAREN_RPAREN = 12,
  anon_sym_DASH_GT = 13,
  anon_sym_EQ_GT = 14,
  aux_sym_function_declaration_token1 = 15,
  aux_sym_block_token1 = 16,
  sym__indent_start = 17,
  aux_sym_identifier_token1 = 18,
  sym__constant_identifier = 19,
  anon_sym_DASH_DASH = 20,
  aux_sym_comment_token1 = 21,
  anon_sym_DASH_DASH_LBRACK_LBRACK = 22,
  aux_sym_comment_token2 = 23,
  aux_sym_comment_token3 = 24,
  anon_sym_RBRACK_RBRACK = 25,
  sym_false = 26,
  sym_true = 27,
  sym_nil = 28,
  sym_string = 29,
  sym_number = 30,
  sym_source_file = 31,
  sym_statement = 32,
  sym_assignment_statement = 33,
  sym_variable_list = 34,
  sym_update_statement = 35,
  sym__update_operator = 36,
  sym_expression_list = 37,
  sym__expression = 38,
  sym_function_declaration = 39,
  sym_block = 40,
  sym__block_start = 41,
  sym_identifier = 42,
  sym_comment = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_variable_list_repeat1 = 45,
  aux_sym_expression_list_repeat1 = 46,
  aux_sym_block_repeat1 = 47,
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
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ_GT] = "=>",
  [aux_sym_function_declaration_token1] = "function_declaration_token1",
  [aux_sym_block_token1] = "block_token1",
  [sym__indent_start] = "_indent_start",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym__constant_identifier] = "_constant_identifier",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_DASH_DASH_LBRACK_LBRACK] = "--[[",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym_comment_token3] = "comment_token3",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [sym_false] = "false",
  [sym_true] = "true",
  [sym_nil] = "nil",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_variable_list] = "variable_list",
  [sym_update_statement] = "update_statement",
  [sym__update_operator] = "_update_operator",
  [sym_expression_list] = "expression_list",
  [sym__expression] = "_expression",
  [sym_function_declaration] = "function_declaration",
  [sym_block] = "block",
  [sym__block_start] = "_block_start",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_list_repeat1] = "variable_list_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
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
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [aux_sym_function_declaration_token1] = aux_sym_function_declaration_token1,
  [aux_sym_block_token1] = aux_sym_block_token1,
  [sym__indent_start] = sym__indent_start,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym__constant_identifier] = sym__constant_identifier,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_DASH_DASH_LBRACK_LBRACK] = anon_sym_DASH_DASH_LBRACK_LBRACK,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [sym_false] = sym_false,
  [sym_true] = sym_true,
  [sym_nil] = sym_nil,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_variable_list] = sym_variable_list,
  [sym_update_statement] = sym_update_statement,
  [sym__update_operator] = sym__update_operator,
  [sym_expression_list] = sym_expression_list,
  [sym__expression] = sym__expression,
  [sym_function_declaration] = sym_function_declaration,
  [sym_block] = sym_block,
  [sym__block_start] = sym__block_start,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_list_repeat1] = aux_sym_variable_list_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__indent_start] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__constant_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
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
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__block_start] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [aux_sym_block_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 4,
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 2,
  [16] = 2,
  [17] = 17,
  [18] = 17,
  [19] = 17,
  [20] = 20,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 25,
  [29] = 29,
  [30] = 6,
  [31] = 31,
  [32] = 32,
  [33] = 31,
  [34] = 29,
  [35] = 29,
  [36] = 29,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 6,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 20,
  [47] = 22,
  [48] = 48,
  [49] = 26,
  [50] = 26,
  [51] = 31,
  [52] = 31,
  [53] = 32,
  [54] = 54,
  [55] = 23,
  [56] = 56,
  [57] = 24,
  [58] = 43,
  [59] = 59,
  [60] = 59,
  [61] = 37,
  [62] = 41,
  [63] = 63,
  [64] = 64,
  [65] = 39,
  [66] = 42,
  [67] = 63,
  [68] = 63,
  [69] = 63,
  [70] = 38,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 75,
  [78] = 75,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '"', 8,
        '#', 37,
        '%', 17,
        '(', 9,
        '*', 18,
        '+', 19,
        ',', 40,
        '-', 12,
        '.', 16,
        '/', 20,
        '=', 39,
        ']', 27,
        'a', 66,
        'f', 59,
        'n', 63,
        'o', 67,
        't', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 53,
        '\r', 1,
        '%', 17,
        '*', 18,
        '+', 19,
        ',', 40,
        '-', 11,
        '.', 16,
        '/', 20,
        '=', 38,
        'a', 29,
        'o', 30,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '-') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 8,
        '(', 9,
        '-', 10,
        'f', 59,
        'n', 63,
        't', 68,
        '\n', 52,
        '\r', 52,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '>') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '=') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(93);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == '[') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == '[') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(93);
      END_STATE();
    case 27:
      if (lookahead == ']') ADVANCE(95);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(93);
      END_STATE();
    case 33:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '"', 8,
        '#', 37,
        '(', 9,
        ',', 40,
        '-', 10,
        '=', 38,
        'f', 59,
        'n', 63,
        't', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '"', 8,
        '%', 17,
        '(', 9,
        '*', 18,
        '+', 19,
        ',', 40,
        '-', 11,
        '.', 16,
        '/', 20,
        '=', 38,
        'a', 66,
        'f', 59,
        'n', 63,
        'o', 67,
        't', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '"', 8,
        '(', 9,
        ',', 40,
        '-', 10,
        'f', 59,
        'n', 63,
        't', 68,
        '\t', 56,
        ' ', 56,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_hash_bang_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_and_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_or_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_function_declaration_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_block_token1);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_block_token1);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__indent_start);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__indent_start);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '=') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '=') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '[') ADVANCE(25);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(32);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(94);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK_LBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK_LBRACK);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(81);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK_LBRACK);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(32);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK_LBRACK);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '-') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '-') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(32);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '-') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(32);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 33},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 33},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 33},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 35},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 33},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 78},
  [80] = {.lex_state = 89},
  [81] = {.lex_state = 0},
  [82] = {(TSStateId)(-1)},
  [83] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
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
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [sym__constant_identifier] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_DASH_DASH_LBRACK_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(73),
    [sym_statement] = STATE(44),
    [sym_assignment_statement] = STATE(39),
    [sym_variable_list] = STATE(75),
    [sym_update_statement] = STATE(39),
    [sym_expression_list] = STATE(39),
    [sym__expression] = STATE(31),
    [sym_function_declaration] = STATE(42),
    [sym_identifier] = STATE(3),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_hash_bang_line] = ACTIONS(9),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(11),
    [aux_sym_identifier_token1] = ACTIONS(13),
    [sym__constant_identifier] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_DASH_DASH_LBRACK_LBRACK] = ACTIONS(5),
    [sym_false] = ACTIONS(15),
    [sym_true] = ACTIONS(15),
    [sym_nil] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [sym_number] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(21), 1,
      anon_sym_EQ,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      sym_comment,
    STATE(35), 1,
      sym__update_operator,
    STATE(56), 1,
      aux_sym_variable_list_repeat1,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(28), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
    ACTIONS(26), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_and_EQ,
      anon_sym_or_EQ,
      anon_sym_DOT_DOT_EQ,
  [45] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(21), 1,
      anon_sym_EQ,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      sym_comment,
    STATE(29), 1,
      sym__update_operator,
    STATE(56), 1,
      aux_sym_variable_list_repeat1,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(28), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
    ACTIONS(26), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_and_EQ,
      anon_sym_or_EQ,
      anon_sym_DOT_DOT_EQ,
  [90] = 14,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(30), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(32), 1,
      aux_sym_function_declaration_token1,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(3), 1,
      sym_identifier,
    STATE(4), 1,
      sym_comment,
    STATE(31), 1,
      sym__expression,
    STATE(42), 1,
      sym_function_declaration,
    STATE(60), 1,
      sym__block_start,
    STATE(75), 1,
      sym_variable_list,
    ACTIONS(13), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    STATE(43), 2,
      sym_statement,
      sym_block,
    STATE(39), 3,
      sym_assignment_statement,
      sym_update_statement,
      sym_expression_list,
    ACTIONS(15), 5,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [141] = 14,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(36), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(38), 1,
      aux_sym_function_declaration_token1,
    STATE(5), 1,
      sym_comment,
    STATE(16), 1,
      sym_identifier,
    STATE(52), 1,
      sym__expression,
    STATE(59), 1,
      sym__block_start,
    STATE(66), 1,
      sym_function_declaration,
    STATE(77), 1,
      sym_variable_list,
    ACTIONS(40), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    STATE(58), 2,
      sym_statement,
      sym_block,
    STATE(65), 3,
      sym_assignment_statement,
      sym_update_statement,
      sym_expression_list,
    ACTIONS(42), 5,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [192] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(6), 1,
      sym_comment,
    ACTIONS(46), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
    ACTIONS(44), 14,
      ts_builtin_sym_end,
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
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
  [225] = 14,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(36), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(38), 1,
      aux_sym_function_declaration_token1,
    STATE(7), 1,
      sym_comment,
    STATE(15), 1,
      sym_identifier,
    STATE(51), 1,
      sym__expression,
    STATE(59), 1,
      sym__block_start,
    STATE(66), 1,
      sym_function_declaration,
    STATE(76), 1,
      sym_variable_list,
    ACTIONS(40), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    STATE(58), 2,
      sym_statement,
      sym_block,
    STATE(65), 3,
      sym_assignment_statement,
      sym_update_statement,
      sym_expression_list,
    ACTIONS(42), 5,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [276] = 14,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(30), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(32), 1,
      aux_sym_function_declaration_token1,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(2), 1,
      sym_identifier,
    STATE(8), 1,
      sym_comment,
    STATE(33), 1,
      sym__expression,
    STATE(42), 1,
      sym_function_declaration,
    STATE(60), 1,
      sym__block_start,
    STATE(78), 1,
      sym_variable_list,
    ACTIONS(13), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    STATE(43), 2,
      sym_statement,
      sym_block,
    STATE(39), 3,
      sym_assignment_statement,
      sym_update_statement,
      sym_expression_list,
    ACTIONS(15), 5,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [327] = 15,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_identifier,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 1,
      sym__expression,
    STATE(42), 1,
      sym_function_declaration,
    STATE(44), 1,
      sym_statement,
    STATE(75), 1,
      sym_variable_list,
    ACTIONS(13), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    ACTIONS(15), 3,
      sym_false,
      sym_true,
      sym_nil,
    STATE(39), 3,
      sym_assignment_statement,
      sym_update_statement,
      sym_expression_list,
  [379] = 15,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_identifier,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 1,
      sym__expression,
    STATE(42), 1,
      sym_function_declaration,
    STATE(44), 1,
      sym_statement,
    STATE(75), 1,
      sym_variable_list,
    ACTIONS(13), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    ACTIONS(15), 3,
      sym_false,
      sym_true,
      sym_nil,
    STATE(39), 3,
      sym_assignment_statement,
      sym_update_statement,
      sym_expression_list,
  [431] = 15,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_identifier,
    STATE(11), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 1,
      sym__expression,
    STATE(42), 1,
      sym_function_declaration,
    STATE(44), 1,
      sym_statement,
    STATE(75), 1,
      sym_variable_list,
    ACTIONS(13), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    ACTIONS(15), 3,
      sym_false,
      sym_true,
      sym_nil,
    STATE(39), 3,
      sym_assignment_statement,
      sym_update_statement,
      sym_expression_list,
  [483] = 14,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(31), 1,
      sym__expression,
    STATE(42), 1,
      sym_function_declaration,
    STATE(44), 1,
      sym_statement,
    STATE(75), 1,
      sym_variable_list,
    ACTIONS(57), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    ACTIONS(63), 2,
      sym_string,
      sym_number,
    STATE(12), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(60), 3,
      sym_false,
      sym_true,
      sym_nil,
    STATE(39), 3,
      sym_assignment_statement,
      sym_update_statement,
      sym_expression_list,
  [533] = 13,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(66), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(13), 1,
      sym_comment,
    STATE(16), 1,
      sym_identifier,
    STATE(52), 1,
      sym__expression,
    STATE(66), 1,
      sym_function_declaration,
    STATE(72), 1,
      sym_statement,
    STATE(77), 1,
      sym_variable_list,
    ACTIONS(40), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    ACTIONS(68), 2,
      sym_string,
      sym_number,
    ACTIONS(42), 3,
      sym_false,
      sym_true,
      sym_nil,
    STATE(65), 3,
      sym_assignment_statement,
      sym_update_statement,
      sym_expression_list,
  [579] = 13,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(66), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(14), 1,
      sym_comment,
    STATE(16), 1,
      sym_identifier,
    STATE(52), 1,
      sym__expression,
    STATE(66), 1,
      sym_function_declaration,
    STATE(71), 1,
      sym_statement,
    STATE(77), 1,
      sym_variable_list,
    ACTIONS(40), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    ACTIONS(68), 2,
      sym_string,
      sym_number,
    ACTIONS(42), 3,
      sym_false,
      sym_true,
      sym_nil,
    STATE(65), 3,
      sym_assignment_statement,
      sym_update_statement,
      sym_expression_list,
  [625] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(19), 1,
      aux_sym_block_token1,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(70), 1,
      anon_sym_EQ,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      sym_comment,
    STATE(34), 1,
      sym__update_operator,
    STATE(56), 1,
      aux_sym_variable_list_repeat1,
    ACTIONS(75), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_and_EQ,
      anon_sym_or_EQ,
      anon_sym_DOT_DOT_EQ,
  [660] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(19), 1,
      aux_sym_block_token1,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(70), 1,
      anon_sym_EQ,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      sym_comment,
    STATE(36), 1,
      sym__update_operator,
    STATE(56), 1,
      aux_sym_variable_list_repeat1,
    ACTIONS(75), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_and_EQ,
      anon_sym_or_EQ,
      anon_sym_DOT_DOT_EQ,
  [695] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(66), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(17), 1,
      sym_comment,
    STATE(51), 1,
      sym__expression,
    STATE(62), 1,
      sym_expression_list,
    ACTIONS(40), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    ACTIONS(68), 2,
      sym_string,
      sym_number,
    STATE(66), 2,
      sym_function_declaration,
      sym_identifier,
    ACTIONS(42), 3,
      sym_false,
      sym_true,
      sym_nil,
  [731] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(18), 1,
      sym_comment,
    STATE(33), 1,
      sym__expression,
    STATE(41), 1,
      sym_expression_list,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    ACTIONS(77), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    STATE(42), 2,
      sym_function_declaration,
      sym_identifier,
    ACTIONS(15), 3,
      sym_false,
      sym_true,
      sym_nil,
  [767] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(66), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(19), 1,
      sym_comment,
    STATE(52), 1,
      sym__expression,
    STATE(62), 1,
      sym_expression_list,
    ACTIONS(40), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    ACTIONS(68), 2,
      sym_string,
      sym_number,
    STATE(66), 2,
      sym_function_declaration,
      sym_identifier,
    ACTIONS(42), 3,
      sym_false,
      sym_true,
      sym_nil,
  [803] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym__indent_start,
    STATE(20), 2,
      sym_comment,
      aux_sym_block_repeat1,
    ACTIONS(81), 9,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [831] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(21), 1,
      sym_comment,
    STATE(31), 1,
      sym__expression,
    STATE(41), 1,
      sym_expression_list,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    ACTIONS(77), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    STATE(42), 2,
      sym_function_declaration,
      sym_identifier,
    ACTIONS(15), 3,
      sym_false,
      sym_true,
      sym_nil,
  [867] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym__indent_start,
    STATE(20), 1,
      aux_sym_block_repeat1,
    STATE(22), 1,
      sym_comment,
    ACTIONS(88), 9,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [897] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(23), 1,
      sym_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym__indent_start,
    ACTIONS(94), 9,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [922] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(24), 2,
      sym_comment,
      aux_sym_expression_list_repeat1,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(101), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [949] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(25), 1,
      sym_comment,
    STATE(37), 1,
      sym__expression,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    ACTIONS(77), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    STATE(42), 2,
      sym_function_declaration,
      sym_identifier,
    ACTIONS(15), 3,
      sym_false,
      sym_true,
      sym_nil,
  [982] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_expression_list_repeat1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(107), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [1011] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_expression_list_repeat1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(107), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [1040] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(66), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(28), 1,
      sym_comment,
    STATE(61), 1,
      sym__expression,
    ACTIONS(40), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    ACTIONS(68), 2,
      sym_string,
      sym_number,
    STATE(66), 2,
      sym_function_declaration,
      sym_identifier,
    ACTIONS(42), 3,
      sym_false,
      sym_true,
      sym_nil,
  [1073] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(29), 1,
      sym_comment,
    STATE(38), 1,
      sym__expression,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    ACTIONS(77), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    STATE(42), 2,
      sym_function_declaration,
      sym_identifier,
    ACTIONS(15), 3,
      sym_false,
      sym_true,
      sym_nil,
  [1106] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(44), 1,
      aux_sym_block_token1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(46), 10,
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
  [1131] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_expression_list_repeat1,
    STATE(31), 1,
      sym_comment,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(116), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [1160] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      sym__indent_start,
    STATE(32), 1,
      sym_comment,
    ACTIONS(120), 9,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [1187] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_expression_list_repeat1,
    STATE(33), 1,
      sym_comment,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(116), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [1216] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(66), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(34), 1,
      sym_comment,
    STATE(70), 1,
      sym__expression,
    ACTIONS(40), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    ACTIONS(68), 2,
      sym_string,
      sym_number,
    STATE(66), 2,
      sym_function_declaration,
      sym_identifier,
    ACTIONS(42), 3,
      sym_false,
      sym_true,
      sym_nil,
  [1249] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(35), 1,
      sym_comment,
    STATE(38), 1,
      sym__expression,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    ACTIONS(77), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    STATE(42), 2,
      sym_function_declaration,
      sym_identifier,
    ACTIONS(15), 3,
      sym_false,
      sym_true,
      sym_nil,
  [1282] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN_RPAREN,
    STATE(36), 1,
      sym_comment,
    STATE(70), 1,
      sym__expression,
    ACTIONS(40), 2,
      aux_sym_identifier_token1,
      sym__constant_identifier,
    ACTIONS(68), 2,
      sym_string,
      sym_number,
    STATE(66), 2,
      sym_function_declaration,
      sym_identifier,
    ACTIONS(42), 3,
      sym_false,
      sym_true,
      sym_nil,
  [1315] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(37), 1,
      sym_comment,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(101), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [1339] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(38), 1,
      sym_comment,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(131), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [1363] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(39), 1,
      sym_comment,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(135), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [1387] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(40), 1,
      sym_comment,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(46), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [1411] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(41), 1,
      sym_comment,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(139), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [1435] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(42), 1,
      sym_comment,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(28), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [1459] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(43), 1,
      sym_comment,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(120), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [1483] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(44), 1,
      sym_comment,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(143), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [1506] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(45), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_LPAREN_RPAREN,
      sym_string,
      sym_number,
    ACTIONS(147), 5,
      aux_sym_identifier_token1,
      sym__constant_identifier,
      sym_false,
      sym_true,
      sym_nil,
  [1528] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(149), 1,
      sym__indent_start,
    ACTIONS(81), 2,
      anon_sym_COMMA,
      aux_sym_block_token1,
    STATE(46), 2,
      sym_comment,
      aux_sym_block_repeat1,
  [1546] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(152), 1,
      sym__indent_start,
    STATE(46), 1,
      aux_sym_block_repeat1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_COMMA,
      aux_sym_block_token1,
  [1566] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(154), 1,
      anon_sym_EQ,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(48), 2,
      sym_comment,
      aux_sym_variable_list_repeat1,
  [1583] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(103), 1,
      aux_sym_block_token1,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_expression_list_repeat1,
  [1602] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(103), 1,
      aux_sym_block_token1,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_expression_list_repeat1,
  [1621] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(114), 1,
      aux_sym_block_token1,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_expression_list_repeat1,
    STATE(51), 1,
      sym_comment,
  [1640] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(114), 1,
      aux_sym_block_token1,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_expression_list_repeat1,
    STATE(52), 1,
      sym_comment,
  [1659] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(167), 1,
      sym__indent_start,
    STATE(53), 1,
      sym_comment,
    ACTIONS(120), 2,
      anon_sym_COMMA,
      aux_sym_block_token1,
  [1676] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(13), 1,
      sym__constant_identifier,
    ACTIONS(169), 1,
      aux_sym_identifier_token1,
    STATE(54), 1,
      sym_comment,
    STATE(64), 1,
      sym_identifier,
  [1695] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(55), 1,
      sym_comment,
    ACTIONS(94), 3,
      anon_sym_COMMA,
      aux_sym_block_token1,
      sym__indent_start,
  [1710] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(171), 1,
      anon_sym_EQ,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_variable_list_repeat1,
    STATE(56), 1,
      sym_comment,
  [1729] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(96), 1,
      aux_sym_block_token1,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(57), 2,
      sym_comment,
      aux_sym_expression_list_repeat1,
  [1746] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(118), 1,
      aux_sym_block_token1,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      sym_comment,
  [1762] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(178), 1,
      sym__indent_start,
    STATE(47), 1,
      aux_sym_block_repeat1,
    STATE(59), 1,
      sym_comment,
  [1778] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(90), 1,
      sym__indent_start,
    STATE(22), 1,
      aux_sym_block_repeat1,
    STATE(60), 1,
      sym_comment,
  [1794] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(96), 1,
      aux_sym_block_token1,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      sym_comment,
  [1810] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(137), 1,
      aux_sym_block_token1,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      sym_comment,
  [1826] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(63), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [1840] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(64), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [1854] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(133), 1,
      aux_sym_block_token1,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      sym_comment,
  [1870] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(19), 1,
      aux_sym_block_token1,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(66), 1,
      sym_comment,
  [1886] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(67), 1,
      sym_comment,
    ACTIONS(182), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [1900] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(68), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [1914] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(69), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_DASH_GT,
      anon_sym_EQ_GT,
  [1928] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(129), 1,
      aux_sym_block_token1,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      sym_comment,
  [1944] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(188), 1,
      aux_sym_block_token1,
    STATE(71), 1,
      sym_comment,
  [1957] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(190), 1,
      aux_sym_block_token1,
    STATE(72), 1,
      sym_comment,
  [1970] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_comment,
  [1983] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(194), 1,
      aux_sym_comment_token2,
    STATE(74), 1,
      sym_comment,
  [1996] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(196), 1,
      anon_sym_EQ,
    STATE(75), 1,
      sym_comment,
  [2009] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(198), 1,
      anon_sym_EQ,
    STATE(76), 1,
      sym_comment,
  [2022] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(200), 1,
      anon_sym_EQ,
    STATE(77), 1,
      sym_comment,
  [2035] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(202), 1,
      anon_sym_EQ,
    STATE(78), 1,
      sym_comment,
  [2048] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(204), 1,
      aux_sym_comment_token1,
    STATE(79), 1,
      sym_comment,
  [2061] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(34), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(206), 1,
      aux_sym_comment_token3,
    STATE(80), 1,
      sym_comment,
  [2074] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(208), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(81), 1,
      sym_comment,
  [2087] = 1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
  [2091] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 225,
  [SMALL_STATE(8)] = 276,
  [SMALL_STATE(9)] = 327,
  [SMALL_STATE(10)] = 379,
  [SMALL_STATE(11)] = 431,
  [SMALL_STATE(12)] = 483,
  [SMALL_STATE(13)] = 533,
  [SMALL_STATE(14)] = 579,
  [SMALL_STATE(15)] = 625,
  [SMALL_STATE(16)] = 660,
  [SMALL_STATE(17)] = 695,
  [SMALL_STATE(18)] = 731,
  [SMALL_STATE(19)] = 767,
  [SMALL_STATE(20)] = 803,
  [SMALL_STATE(21)] = 831,
  [SMALL_STATE(22)] = 867,
  [SMALL_STATE(23)] = 897,
  [SMALL_STATE(24)] = 922,
  [SMALL_STATE(25)] = 949,
  [SMALL_STATE(26)] = 982,
  [SMALL_STATE(27)] = 1011,
  [SMALL_STATE(28)] = 1040,
  [SMALL_STATE(29)] = 1073,
  [SMALL_STATE(30)] = 1106,
  [SMALL_STATE(31)] = 1131,
  [SMALL_STATE(32)] = 1160,
  [SMALL_STATE(33)] = 1187,
  [SMALL_STATE(34)] = 1216,
  [SMALL_STATE(35)] = 1249,
  [SMALL_STATE(36)] = 1282,
  [SMALL_STATE(37)] = 1315,
  [SMALL_STATE(38)] = 1339,
  [SMALL_STATE(39)] = 1363,
  [SMALL_STATE(40)] = 1387,
  [SMALL_STATE(41)] = 1411,
  [SMALL_STATE(42)] = 1435,
  [SMALL_STATE(43)] = 1459,
  [SMALL_STATE(44)] = 1483,
  [SMALL_STATE(45)] = 1506,
  [SMALL_STATE(46)] = 1528,
  [SMALL_STATE(47)] = 1546,
  [SMALL_STATE(48)] = 1566,
  [SMALL_STATE(49)] = 1583,
  [SMALL_STATE(50)] = 1602,
  [SMALL_STATE(51)] = 1621,
  [SMALL_STATE(52)] = 1640,
  [SMALL_STATE(53)] = 1659,
  [SMALL_STATE(54)] = 1676,
  [SMALL_STATE(55)] = 1695,
  [SMALL_STATE(56)] = 1710,
  [SMALL_STATE(57)] = 1729,
  [SMALL_STATE(58)] = 1746,
  [SMALL_STATE(59)] = 1762,
  [SMALL_STATE(60)] = 1778,
  [SMALL_STATE(61)] = 1794,
  [SMALL_STATE(62)] = 1810,
  [SMALL_STATE(63)] = 1826,
  [SMALL_STATE(64)] = 1840,
  [SMALL_STATE(65)] = 1854,
  [SMALL_STATE(66)] = 1870,
  [SMALL_STATE(67)] = 1886,
  [SMALL_STATE(68)] = 1900,
  [SMALL_STATE(69)] = 1914,
  [SMALL_STATE(70)] = 1928,
  [SMALL_STATE(71)] = 1944,
  [SMALL_STATE(72)] = 1957,
  [SMALL_STATE(73)] = 1970,
  [SMALL_STATE(74)] = 1983,
  [SMALL_STATE(75)] = 1996,
  [SMALL_STATE(76)] = 2009,
  [SMALL_STATE(77)] = 2022,
  [SMALL_STATE(78)] = 2035,
  [SMALL_STATE(79)] = 2048,
  [SMALL_STATE(80)] = 2061,
  [SMALL_STATE(81)] = 2074,
  [SMALL_STATE(82)] = 2087,
  [SMALL_STATE(83)] = 2091,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 1, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0), SHIFT(54),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_list, 1, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0), SHIFT(54),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 0), SHIFT(25),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_start, 1, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 0), SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_statement, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_operator, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__update_operator, 1, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression_list, 2, 0, 0), SHIFT(28),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_expression_list, 1, 0, 0), SHIFT(28),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_start, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
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
