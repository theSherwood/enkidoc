#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"

#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

// https://github.com/tree-sitter/tree-sitter-python/blob/master/src/scanner.c

enum TokenType {
  LINE_START,
  LINE_END,
  INDENT,
  DEDENT,
  END_OF_FILE,
};

typedef struct {
  bool done;
  Array(uint16_t) indents;
} Scanner;

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

bool tree_sitter_enkidoc_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;

  if (lexer->eof(lexer))             printf("scan <eof>\n");
  else if (lexer->lookahead == '\n') printf("scan <newline>\n");
  else                               printf("scan %c\n", lexer->lookahead);

  if (scanner->done) {
    printf("DONE\n");
    return false;
  }

  char c = lexer->lookahead;

  if (lexer->eof(lexer)) {
    skip(lexer);
    lexer->mark_end(lexer);
    lexer->result_symbol = END_OF_FILE;
    scanner->done = true;
    printf("eof\n");
    return true;
  }

  // if (valid_symbols[LINE_START] && lexer->get_column(lexer) == 0) {
  //   printf("line_start\n");
  //   lexer->result_symbol = LINE_START;
  //   return true;
  // }

  // if (valid_symbols[LINE_END]) {
  //   printf("considering line_end...\n");
  //   if (lexer->eof(lexer)) {
  //     lexer->result_symbol = LINE_END;
  //     printf("line_end\n");
  //     return true;
  //   }
  //   if (c == '\r') {
  //     printf("uhoh\n");
  //     advance(lexer);
  //   }
  //   if (c == '\n') {
  //     lexer->result_symbol = LINE_END;
  //     printf("line_end\n");
  //     return true;
  //   }
  // }

  if (c != ' ' && c != '\n' && c != '\t' && c != '\r') {
    printf("FAIL\n");
    return false;
  }

  bool found_end_of_line = false;
  uint32_t indent_length = 0;
  int32_t first_comment_indent_length = -1;
  for (;;) {
      if (lexer->lookahead == '\n') {
          found_end_of_line = true;
          indent_length = 0;
          skip(lexer);
      } else if (lexer->lookahead == ' ') {
          indent_length++;
          skip(lexer);
      } else if (lexer->lookahead == '\r' || lexer->lookahead == '\f') {
          indent_length = 0;
          skip(lexer);
      } else if (lexer->lookahead == '\t') {
          indent_length += 8;
          skip(lexer);
      } else if (lexer->eof(lexer)) {
          indent_length = 0;
          found_end_of_line = true;
          break;
      } else {
          break;
      }
  }

  if (found_end_of_line) {
    if (scanner->indents.size > 0) {
      uint16_t current_indent_length = *array_back(&scanner->indents);
      if (valid_symbols[INDENT] && indent_length > current_indent_length) {
        array_push(&scanner->indents, indent_length);
        lexer->result_symbol = INDENT;
        printf("indent\n");
        return true;
      }
      if (valid_symbols[DEDENT] && indent_length < current_indent_length) {
        array_pop(&scanner->indents);
        lexer->result_symbol = DEDENT;
        printf("dedent\n");
        return true;
      }
    }
  }

  return false;
}

unsigned tree_sitter_enkidoc_external_scanner_serialize(void *payload, char *buffer) {
  printf("SERIALIZE\n");
  Scanner *scanner = (Scanner *)payload;
  size_t size = 0;
  buffer[size++] = scanner->done;
  uint32_t iter = 1;
  for (; iter < scanner->indents.size && size < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
    buffer[size++] = (char)*array_get(&scanner->indents, iter);
  }
  return size;
}

void tree_sitter_enkidoc_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  printf("DESERIALIZE\n");
  Scanner *scanner = (Scanner *)payload;
  scanner->done = false;
  array_delete(&scanner->indents);
  array_push(&scanner->indents, 0);
  if (length > 0) {
    size_t size = 0;
    scanner->done = buffer[size++];
    for (; size < length; size++) {
      array_push(&scanner->indents, (unsigned char)buffer[size]);
    }
  }
}

void *tree_sitter_enkidoc_external_scanner_create() {
    Scanner *scanner = calloc(1, sizeof(Scanner));
    array_init(&scanner->indents);
    tree_sitter_enkidoc_external_scanner_deserialize(scanner, NULL, 0);
    return scanner;
}

void tree_sitter_enkidoc_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    array_delete(&scanner->indents);
    free(scanner);
}
