/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "moonscript",

  extras: $ => [
    /\s/,
    $.comment,
    $._multi_line_comment
  ],

  conflicts: $ => [
    [$._assignable, $._expression],
    [$._assignable, $.function_call],
    [$._assignable, $.function_call, $._expression],
    // [$._assignable_list, $._assignable_list],
    [$.function_declaration, $.function_declaration],
    [$._expression, $.function_call],
    [$.function_call, $.function_call],
    [$.indented_block, $.indented_block],
    [$.source_file, $._expression_list],
    [$._expression_list, $._expression_list],

  ],

  rules: {

    source_file: $ => repeat(choice($._statement, $._expression, $.comment)),

    _statement: $ => choice(
      $.assignment,
      $._expression_list
    ),

    assignment: $ => seq(
      $._assignable_list,
      /\s/,
      $.operator,
      /\s/,
      $._expression_list
    ),

    operator: $ => choice(
      "=",
      "-=",
      "+=",
      "==",
      "~=",
      "!=",
      "and=",
      "or=",
      "..=",
      "%=",
      "/=",
    ),

    _assignable_list: $ => seq(
      $._assignable,
      repeat(seq(',', $._assignable))
    ),

    _assignable: $ => choice(
      $.identifier,
      $.table,
    ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    table: $ => seq("{", optional($.table_fields), "}"),

    table_fields: $ => repeat1(
      seq(
        choice(
          $._expression_list,
          seq($.table_index, $.operator, $._expression_list),
          seq($.table_key, $.operator, $._expression_list)
        ), optional(",")
      )
    ),

    table_index: $ => seq("[", $.number, "]"),
    table_key: $ => seq("[", $.string, "]"),

    _expression_list: $ => seq(
      $._expression,
      repeat(seq(",", $._expression))
    ),

    _expression: $ => choice(
      $.identifier,
      $.number,
      $.string,
      $.table,
      $.function_declaration,
      $.function_call
    ),

    function_declaration: $ => seq(
      optional(
        seq(
          '(',
          optional($.parameter_list),
          ')',
          /\s/
        )
      ),
      choice(
        '=>',
        '->',
      ),
      optional($.function_body)
    ),

    parameter_list: $ => seq(
      $.identifier,

      repeat(seq(',', $.identifier))

    ),

    function_body: $ => seq(
      choice(
        $._expression,
        $.indented_block
      ),
    ),

    indented_block: $ => seq(
      repeat1(
        seq(
          /\t+/,
          $._statement
        )
      )
    ),


    function_call: $ => seq(
      $.identifier,

      choice(
        "!",
        "()",
        seq(/\s/, $._expression, repeat(seq(/\s/, $._expression))),
        seq("(", $._expression_list, ")")
      )
    ),

    comment: $ => choice(
      $._single_line_comment,
      $._multi_line_comment
    ),

    _single_line_comment: $ => token(seq('--', /[^\n]*/)),
    _multi_line_comment: $ => token(seq(
      "--[[",
      /([^°]+)/,
      "]]"
    )),

    number: $ => /\d+(\.\d+)?/,

    string: $ => choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'")
    ),
  },
})
