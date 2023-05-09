module.exports = grammar({
  name: "pug",

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.extends_statement,
          $.include_statement,
          $.link_tag,
          $.script_tag,
          $.style_tag,
          $.tbd
        )
      ),

    extends_statement: ($) => seq("extends", " ", $.path),

    include_statement: ($) => seq("include", " ", $.path),

    link_tag: ($) => seq("link", optional($._attributes)),

    script_tag: ($) => seq("script", optional($._attributes)),

    style_tag: ($) => seq("style", optional($._attributes)),

    path: ($) => seq(repeat1(choice(/\w/, "/")), ".", repeat1(/\w/)),

    _attributes: ($) =>
      seq("(", repeat(seq($.attribute, optional(choice(",", " ")))), ")"),

    attribute: ($) =>
      seq(
        $.attribute_name,
        optional(seq("=", choice($.attribute_value, $.quoted_attribute_value)))
      ),

    attribute_name: ($) => /[^<>"'/=\s]+/,

    attribute_value: ($) => /[^<>"'=\s]+/,

    quoted_attribute_value: ($) =>
      choice(
        seq("'", optional(alias(/[^']+/, $.attribute_value)), "'"),
        seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"')
      ),

    // Catch-all rule for constructs we don't care about
    tbd: ($) => prec(-1, repeat1(/./)),
  },
});
