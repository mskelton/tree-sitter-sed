/**
 * @file GNU sed grammer for tree-sitter
 * @author Mark Skelton <mdskelton99@gmail.com>
 * @license ISC
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "sed",
  rules: {
    comment: () => token(seq("#", /.*/)),

    script: ($) => repeat(choice($.command)),

    command: ($) =>
      seq(
        choice($.substitute_command, $.delete_command, $.print_command),
        optional($.address),
      ),

    address: ($) => choice($.number, $.regex),

    substitute_command: ($) =>
      seq(
        "s",
        field("pattern", $.regex),
        field("replacement", $.replacement),
        optional(field("flags", $.substitute_flags)),
      ),

    delete_command: () => "d",

    print_command: () => "p",

    regex: () =>
      seq(
        "/",
        /[^/]+/, // Simple regex without escaping
        "/",
      ),

    replacement: () => /[^/]+/, // Basic replacement pattern

    substitute_flags: () => repeat1(/[gip]/),

    number: () => /\d+/,
  },
})
