/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "moonscript",

  conflicts: $ => [
    [$._assignable, $._expression],
    [$.block, $.block],
    [$.expression_list, $.expression_list],
    
  ],

  rules: {

    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.assignment,
      // Add other statement types here
    ),

    assignment: $ => seq(
      $.assignable_list,
      '=',
      $.expression_list
    ),

    assignable_list: $ => prec.left(seq(
      $._assignable,
      repeat(seq(',', $._assignable))
    )),

    _assignable: $ => choice(
      $.variable,
      // Add other assignable expressions here
    ),

    variable: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    expression_list: $ => seq(
      $._expression,
      repeat(seq(",", $._expression))
    ),

    _expression: $ => choice(
      $.variable,
      $.number,
      $.string,
      $.function_declaration,
      $.assignable_list
      // Add other expression types here
    ),

    function_declaration: $ => seq(
      optional(
        seq(
          '(',
          optional($.parameter_list),
          ')',
        )
      ),
      '->',
      $.function_body
    ),

    parameter_list: $ => seq(
      $.variable,
      repeat(seq(',', $.variable))
    ),

    function_body: $ => choice(
      $._expression,
      $.block
    ),

    block: $ => seq(
      repeat1($._statement)
    ),

    number: $ => /\d+(\.\d+)?/,

    string: $ => choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'")
    ),
  },
})
