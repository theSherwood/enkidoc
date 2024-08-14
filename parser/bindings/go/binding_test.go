package tree_sitter_enkidoc_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-enkidoc"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_enkidoc.Language())
	if language == nil {
		t.Errorf("Error loading YourLanguageName grammar")
	}
}
