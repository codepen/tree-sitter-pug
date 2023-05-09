module.exports = grammar({
  name: "pug",

  rules: {
    fragment: ($) => repeat(choice($.script_tag, $.include_statement, $.tbd)),

    script_tag: ($) => seq("script", optional($.attributes)),

    include_statement: ($) => seq("include", " ", $.path),

    attributes: ($) =>
      seq(
        "(",
        repeat(seq($.attribute, choice(",", " "))),
        optional($.attribute),
        ")"
      ),
    attribute: ($) =>
      seq($.attribute_name, optional(seq("=", $.quoted_attribute_value))),

    tag_name: ($) => /\w(?:[-:\w]*\w)?/,

    attribute_name: ($) => /[\w@\-:]+/,

    quoted_attribute_value: ($) =>
      choice(
        seq("'", optional(alias(/[^']+/, $.attribute_value)), "'"),
        seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"')
      ),

    path: ($) => seq(repeat1(choice(/\w/, "/")), ".", repeat1(/\w/)),

    // Catch-all rule for constructs we don't care about
    tbd: ($) => prec(-1, repeat1(/./)),
  },
});
