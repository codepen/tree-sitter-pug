module.exports = grammar({
  name: "pug",

  externals: ($) => [
    $._newline,
    $._indent,
    $._dedent,
    // $._tag_name,
    $._script_tag_name,
    $._style_tag_name,
    $.raw_text,
  ],

  rules: {
    // source_file: ($) =>
    //   repeat(
    //     choice(
    //       $.extends_statement,
    //       $.include_statement,
    //       $.link_tag,
    //       $.script_tag,
    //       $.style_tag,
    //       $.tbd
    //     )
    //   ),

    // Start of changes
    source_file: ($) =>
      repeat(choice($.comment, $.tag, $.script_tag, $.style_tag, $.doctype)),
    doctype: ($) =>
      seq("doctype", alias(choice("html", "strict", "xml"), $.doctype_name)),
    comment: ($) =>
      seq(
        "//",
        optional($._comment_content),
        $._newline,
        optional(
          seq($._indent, repeat(seq($._comment_content, $._newline)), $._dedent)
        )
      ),
    _comment_content: ($) => /[^ ][^\n]*/,
    script_tag: ($) =>
      prec(
        2,
        seq(
          "script",
          optional(repeat1(choice($.id, $.class))),
          optional($._attributes),
          choice(
            seq(":", $.tag),
            $._content_after_dot,
            seq(
              optional(seq(" ", $._content_or_javascript)),
              $._newline,
              optional($.children)
            )
          )
        )
      ),

    // Produces many ERROR nodes
    style_tag: ($) =>
      prec(
        2,
        seq(
          "style",
          optional(repeat1(choice($.id, $.class))),
          optional($._attributes),
          choice(
            seq(":", $.tag),
            $._content_after_dot,
            seq(
              optional(seq(" ", $._content_or_javascript)),
              $._newline,
              optional($.children)
            )
          )
        )
      ),
    // seq("script", optional($._attributes), optional(seq(".", $._newline))),

    tag: ($) =>
      seq(
        choice($.tag_name, $.id, $.class),
        optional(repeat1(choice($.id, $.class))),
        optional($._attributes),
        choice(
          // NOT SURE WHY THIS DOESN'T MATCH script and style tags
          // that are sub tags of tags
          seq(":", $.tag),
          $._content_after_dot,
          seq(
            optional(seq(" ", $._content_or_javascript)),
            $._newline,
            optional($.children)
          )
        )
      ),

    tag_name: ($) => /\w(?:[-:\w]*\w)?/,
    class: ($) => /\.[_a-z0-9\-]*[_a-z][_a-z0-9\-]*/i,
    id: ($) => /#[\w-]+/,

    // All the content after the dot expectes an indent!
    _content_after_dot: ($) =>
      seq(
        ".",
        $._newline,
        $._indent,
        alias(repeat1(seq($._content_or_javascript, $._newline)), $.children),
        $._dedent
      ),
    javascript: ($) => /[^\n}]+/,
    content: ($) => /[^\n\{]+/,
    _content_or_javascript: ($) =>
      repeat1(choice(seq("{{", $.javascript, "}}"), $.content)),
    children: ($) => seq($._indent, repeat1($._children_choice), $._dedent),
    pipe_content: ($) =>
      seq("|", optional($._content_or_javascript), $._newline),
    _children_choice: ($) => choice($.pipe_content, $.tag),
    // attribute_name: defined differently in reference

    // End of changes

    extends_statement: ($) => seq("extends", " ", $.path),

    include_statement: ($) => seq("include", " ", $.path),

    link_tag: ($) => seq("link", optional($._attributes)),

    path: ($) => seq(repeat1(choice(/\w/, "/")), ".", repeat1(/\w/)),

    // Alternative to external token raw_text
    // raw_text: ($) => choice(seq($._indent, /\w/, $._dedent)),

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
