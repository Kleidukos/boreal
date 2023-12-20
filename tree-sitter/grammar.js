module.exports = grammar({
  name: "boreal",
  rules: {
      source_file: $ => seq(
        $.module_declaration,
        $.top_level_declarations
      ),

      module_declaration: $ => seq(
        "module",
        $.module_name,
        "where"
      ),

      module_name: $ => /[A-Z][a-z]+/,

      top_level_declarations: $ => repeat1(choice(
        $.function_declaration
      )),

      function_declaration: $ => seq(
        field("head", $.identifier), 
        field("parameters", repeat($.identifier)),
        "=",
        field("body", $.expression)
      ),

      expression :$ => choice(
        $.identifier,
        $.binary_operation,
      ),
      
      identifier: $ => /[a-z_\d]+/,
      node: $ => choice(
        $.binary_operation
      ),

      binary_operation: $ => choice(
        prec.left(1, seq($.expression, "+", $.expression)),
        prec.left(2, seq($.expression, "-", $.expression)),
        prec.left(3, seq($.expression, "*", $.expression)),
        prec.left(4, seq($.expression, "/", $.expression)),
      ),
    }
})
