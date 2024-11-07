package tree_sitter_sed_test

import (
	"testing"

	tree_sitter_sed "github.com/mskelton/tree-sitter-sed/bindings/go"
	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_sed.Language())
	if language == nil {
		t.Errorf("Error loading sed grammar")
	}
}
