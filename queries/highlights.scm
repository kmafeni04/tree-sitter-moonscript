; highlights.scm

;; Primitiives
(identifier) @variable
(number) @number
(string) @string
(comment) @comment
(operator) @operator

(assignment
    (identifier)
    (operator)
) @function

;; Functions
(function_declaration
  (parameter_list 
    (identifier) @variable.parameter
  )
)
(function_call) @function.call
(function_call
  (identifier) @function.call
  (arguments
     (identifier) @variable.parameter)
)

;; Tables
(table ["{" "}"] @constructor)
(table_index
   ["[" "]"] @constructor
)
(table_key
   ["[" "]"] @constructor
)
