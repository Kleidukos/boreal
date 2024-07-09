package tree_sitter_boreal_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-boreal"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_boreal.Language())
	if language == nil {
		t.Errorf("Error loading Boreal grammar")
	}
}
