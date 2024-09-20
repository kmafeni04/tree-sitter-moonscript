; highlights.scm

(hash_bang_line) @comment

[(return) (export) (local)] @keyword

(number) @number

[(false) (true)] @boolean

(nil) @constant.builtin

[
  ","
  ":"
] @punctuation.delimiter

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

["and" "or" "not"] @keyword

[
  "="
  "+="
  "-="
  "*="
  "/="
  "%="
  "and="
  "or="
  "..="
  "=="
  "<="
  ">="
  "~="
  "!="
  "<"
  ">"
] @operator

(identifier) @variable

(variable_statement 
  (variable_list 
    (identifier) @variable)
  )

(table_constructor
[
  "{"
  "}"
] @constructor)

(function_declaration) @function

(function_call) @function

(if_statement
[
  "if"
  "elseif"
  "else"
  "then"
] @conditional)

(for_statement
[
  "for"
  "do"
] @repeat)

(while_statement
[
  "while"
  "do"
] @repeat)



