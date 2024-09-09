/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "moonscript",

  extras: $ => [
    $.comment,
    /\s/
  ],

  conflicts: $ => [
    [$.update_statement, $.variable_list]
  ],

  rules: {
    source_file: $ => seq(
      optional($.hash_bang_line),
      repeat($.statement),
    ),

    hash_bang_line: (_) => /#.*/,

    statement: $ => choice(
      $.assignment_statement,
      $.update_statement
    ),

    assignment_statement: $ => seq(
      $.variable_list,
      "=",
      $.expression_list
    ),

    variable_list: $ => seq($.variable, repeat(seq(",", $.variable))),

    variable: $ => $.identifier,


    update_statement: $ => seq(
      $.variable,
      $._update_operator,
      $._expression
    ),

    _update_operator: $ => choice(
      "=",
      "+=",
      "-=",
      "*=",
      "/=",
      "%=",
      "and=",
      "or=",
      "..="
    ),

    expression_list: $ => seq(
      $._expression,
      repeat(seq(",", $._expression))
    ),

    _expression: $ => choice(
      $.false,
      $.true,
      $.nil,
      $.string,
      $.number
    ),

    identifier: $ => choice(/[a-zA-Z_][a-zA-Z0-9_]*/, $._constant_identifier),
    _constant_identifier: _ => /[A-Z][a-zA-Z0-9_]*/,

    comment: $ => choice(
      seq("--", /[^\r\n]*/),
      seq(
        seq("--[[", /.*\r?\n/),
        /([^\]][^\]])*/,
        "]]"
      )
    ),

    false: _ => "false",
    true: _ => "true",
    nil: _ => "nil",

    string: _ => /"[^"]*"/,
    number: _ => /\d+(\.\d+)?/
  }
})
