/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "moonscript",

  extras: ($) => [$.comment, /\s/],

  conflicts: ($) => [
    [$._expression, $.variable_list],
    [$._expression, $.function_call],
    [$.expression_list, $.expression_list],
    [$.arguments, $.arguments],
  ],

  rules: {
    source_file: ($) => seq(optional($.hash_bang_line), repeat($.statement)),

    hash_bang_line: (_) => /#.*/,

    statement: ($) =>
      choice($.assignment_statement, $.update_statement, $.expression_list),

    assignment_statement: ($) => seq($.variable_list, "=", $.expression_list),

    variable_list: ($) => seq($.identifier, repeat(seq(",", $.identifier))),

    update_statement: ($) =>
      seq($.identifier, $._update_operator, $._expression),

    _update_operator: (_) =>
      choice("+=", "-=", "*=", "/=", "%=", "and=", "or=", "..="),

    expression_list: ($) => seq($._expression, repeat(seq(",", $._expression))),

    _expression: ($) =>
      choice(
        $.true,
        $.false,
        $.nil,
        $.string,
        $.number,
        $.identifier,
        $.function_declaration,
        $.function_call,
      ),

    function_declaration: ($) =>
      seq(
        "()",
        choice("->", "=>"),
        choice($._new_line_start, $.statement, $.block),
      ),

    block: ($) =>
      seq(
        $._new_line_start,
        repeat1(seq($._indent_start, $.statement, /(\r?\n)+/)),
      ),

    _new_line_start: (_) => /[\r\n]/,
    _indent_start: (_) => /[ \t]+/,

    function_call: ($) =>
      seq(
        $.identifier,
        choice("!", seq("(", optional($.arguments), ")"), $.arguments),
      ),

    arguments: ($) => seq($._expression, repeat(seq(",", $._expression))),

    identifier: ($) => choice(/[a-zA-Z_][a-zA-Z0-9_]*/, $._constant_identifier),
    _constant_identifier: (_) => /[A-Z][A-Z0-9_]*/,

    comment: (_) =>
      choice(
        seq("--", /[^\r\n]*/),
        seq(seq("--[[", /.*\r?\n/), /([^\]][^\]])*/, "]]"),
      ),

    false: (_) => "false",
    true: (_) => "true",
    nil: (_) => "nil",

    string: (_) => /"[^"]*"/,
    number: (_) => /\d+(\.\d+)?/,
  },
});
