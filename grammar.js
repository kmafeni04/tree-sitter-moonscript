/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "moonscript",

  extras: $ => [
    /\s/
  ],

  rules: {
    source_file: $ => repeat("expression"),

    expression: $ => choice(
      $.string,
      $.number
    ),

    string: _ => /"[^"]*"/,
    number: _ => /\d+(\.\d+)?/
  }
})
