#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"

#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define VERBOSE 1

// Print the result symbol and return the bool
#define result(x) {                              \
  if (VERBOSE) {                                 \
    printf("RESULT:   ");                        \
    if ((x)) print_symbol(lexer->result_symbol); \
    else printf("FALSE");                        \
    printf("\n");                                \
  }                                              \
  return (x);                                    \
}

// https://github.com/tree-sitter/tree-sitter-python/blob/master/src/scanner.c

enum TokenType {
  LINE_START,
  LINE_END,
  INDENT,
  DEDENT,
  END_OF_FILE,
  FIRST_ORDERED_LIST_TOKEN,
  NEXT_ORDERED_LIST_TOKEN,
  LIST_ITEM_CONTENT_CONT,
  LIST_ITEM_CONTENT_END,
  NON_BLANK_LINE,
  DEBUG,
};

typedef struct {
  bool done;
  Array(uint16_t) indents;
} Scanner;

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

bool consume_newline(Scanner *scanner, TSLexer *lexer) {
  if (lexer->lookahead == '\r') advance(lexer);
  if (lexer->lookahead == '\n') {
    advance(lexer);
    return true;
  }
  return false;
}

int consume_inline_whitespace(Scanner *scanner, TSLexer *lexer) {
  int count = 0;
  while (true) {
    if (lexer->lookahead == ' ') {
      advance(lexer);
      count++;
    } else if (lexer->lookahead == '\t') {
      advance(lexer);
      count += 2;
    } else {
      break;
    }
  }
  return count;
}

bool consume_blank_line(Scanner *scanner, TSLexer *lexer) {
  if (consume_newline(scanner, lexer)) {
    consume_inline_whitespace(scanner, lexer);
    if (consume_newline(scanner, lexer)) return true;
  }
  return false;
}

bool consume_ordered_list_token(Scanner *scanner, TSLexer *lexer) {
  if (lexer->lookahead == '+') {
    advance(lexer);
    if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      advance(lexer);
      return true;
    }
  }
  return false;
}

void print_symbol(int symbol) {
  switch (symbol) {
  case LINE_START:               printf("LNS"); break;
  case LINE_END:                 printf("LNE"); break;
  case INDENT:                   printf("IND"); break;
  case DEDENT:                   printf("DED"); break;
  case END_OF_FILE:              printf("EOF"); break;
  case FIRST_ORDERED_LIST_TOKEN: printf("FOT"); break;
  case NEXT_ORDERED_LIST_TOKEN:  printf("NOT"); break;
  case LIST_ITEM_CONTENT_CONT:   printf("LIC"); break;
  case LIST_ITEM_CONTENT_END:    printf("LIE"); break;
  case NON_BLANK_LINE:           printf("NBL"); break;
  case DEBUG:                    printf("DBG"); break;
  default: break;
  }
}

void print_scan(TSLexer *lexer, const bool *valid_symbols) {
  int i = 0;
  char c = lexer->lookahead;
  if (lexer->eof(lexer))    printf("SCAN     <eof>:" );
  else if (c == '\n')       printf("SCAN <newline>:");
  else if (c == ' ')        printf("SCAN   <space>:");
  else if (c == '\t')       printf("SCAN     <tab>:");
  else                      printf("SCAN         %c:", lexer->lookahead);
  for (; i <= DEBUG; i++) {
    printf(" ");
    print_symbol(i);
    printf(" ");
    printf("%d ", valid_symbols[i]);
  }
  printf("\n");
}

bool tree_sitter_enkidoc_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;

  char c = lexer->lookahead;

  if (VERBOSE) print_scan(lexer, valid_symbols);

  if (scanner->done) {
    // printf("DONE\n");
    result(false);
  }

  lexer->mark_end(lexer);

  if (valid_symbols[DEBUG]) {
    // printf("DEBUG!!! %d\n", DEBUG);
    lexer->result_symbol = DEBUG;
    result(true);
  }

  if (lexer->eof(lexer) && valid_symbols[END_OF_FILE]) {
    lexer->result_symbol = END_OF_FILE;
    scanner->done = true;
    // printf("eof\n");
    result(true);
  }

  uint16_t current_indent_length = 0;
  if (scanner->indents.size > 0) {
    current_indent_length = *array_back(&scanner->indents);
  }
  // printf("                             %d\n", current_indent_length);

  if (valid_symbols[LIST_ITEM_CONTENT_CONT] &&
      valid_symbols[NEXT_ORDERED_LIST_TOKEN] &&
      valid_symbols[INDENT]) {
    // printf("LIST_ITEM_CONTENT_CONT?\n");
    lexer->mark_end(lexer);
    // printf("MARK_END------------------------------\n");
    if (lexer->eof(lexer)) {
      if (current_indent_length > 0 && valid_symbols[DEDENT]) {
        array_pop(&scanner->indents);
        lexer->result_symbol = DEDENT;
        // printf("DEDENT A TRUE %d\n", current_indent_length - 2);
        result(true);
      }
      result(false);
    }
    if (consume_newline(scanner, lexer)) {
      // printf("//////////////////////\n");
      int indent_length = consume_inline_whitespace(scanner, lexer);
      int indent_diff = indent_length - current_indent_length;
      if (indent_diff == 0 && consume_ordered_list_token(scanner, lexer)) {
        // printf("NEXT_ORDERED_LIST_TOKEN TRUE\n");
        // // printf("===================\n");
        lexer->mark_end(lexer);
    // printf("MARK_END------------------------------\n");
        lexer->result_symbol = NEXT_ORDERED_LIST_TOKEN;
        result(true);
      }
      // printf("whitespace %d\n", indent_length);
      if (lexer->eof(lexer) || consume_newline(scanner, lexer)) {
        if (current_indent_length > 0 && valid_symbols[DEDENT]) {
          array_pop(&scanner->indents);
          lexer->result_symbol = DEDENT;
          // printf("DEDENT B TRUE %d\n", current_indent_length - 2);
          result(true);
        }
        result(false);
      }
      if (scanner->indents.size > 0) {
        if (indent_diff == 2) {
          // printf("diff %d\n", indent_diff);
          if (consume_ordered_list_token(scanner, lexer)) {
            array_push(&scanner->indents, indent_length);
            lexer->result_symbol = INDENT;
            // printf("INDENT TRUE %d\n", indent_length);
            result(true);
          }
        } else if (current_indent_length > 0 && 
                   (consume_newline(scanner, lexer) ||
                    lexer->eof(lexer))) {
          array_pop(&scanner->indents);
          lexer->result_symbol = DEDENT;
          // printf("DEDENT C TRUE %d\n", current_indent_length - 2);
          result(true);
        } else if (valid_symbols[DEDENT] && indent_diff < 0 && indent_diff % 2 == 0) {
          if (consume_ordered_list_token(scanner, lexer)) {
            // array_push(&scanner->indents, current_indent_length - 2);
            array_pop(&scanner->indents);
            lexer->result_symbol = DEDENT;
            // printf("DEDENT D TRUE %d\n", current_indent_length - 2);
            result(true);
          }
        }
      }
      {
        // printf("LIST_ITEM_CONTENT TRUE\n");
        lexer->result_symbol = LIST_ITEM_CONTENT_CONT;
        result(true);
      }
    }
    result(false);
  }

  // if (valid_symbols[DEDENT]) {
  //   if (consume_newline(scanner, lexer)) {
  //     int indent_length = consume_inline_whitespace(scanner, lexer);
  //     int indent_diff = indent_length - current_indent_length;
  //     if (indent_diff < 0 && indent_diff % 2 == 0 && consume_ordered_list_token(scanner, lexer)) {
  //       array_push(&scanner->indents, indent_length);
  //       lexer->result_symbol = DEDENT;
  //       // printf("DEDENT TRUE\n");
  //       return true;
  //     }
  //   }
  //   return false;
  // }

  if (valid_symbols[FIRST_ORDERED_LIST_TOKEN]) {
    // printf("FIRST_ORDERED_LIST_TOKEN\n");
    int indent_length = consume_inline_whitespace(scanner, lexer);
    int indent_diff = indent_length - current_indent_length;
    if (indent_diff == 0 && consume_ordered_list_token(scanner, lexer)) {
      lexer->mark_end(lexer);
      lexer->result_symbol = FIRST_ORDERED_LIST_TOKEN;
      // printf("FIRST_ORDERED_LIST_TOKEN TRUE\n");
      result(true);
    }
    result(false);
  }

  if (valid_symbols[NEXT_ORDERED_LIST_TOKEN] && valid_symbols[DEDENT]) {
    if (consume_newline(scanner, lexer)) {
      int indent_length = consume_inline_whitespace(scanner, lexer);
      int indent_diff = indent_length - current_indent_length;
      if (indent_diff == 0 && consume_ordered_list_token(scanner, lexer)) {
        // printf("NEXT_ORDERED_LIST_TOKEN TRUE\n");
        lexer->mark_end(lexer);
        lexer->result_symbol = NEXT_ORDERED_LIST_TOKEN;
        result(true);
      } else if (current_indent_length > 0 && 
                 (consume_newline(scanner, lexer) ||
                  lexer->eof(lexer))) {
        array_pop(&scanner->indents);
        lexer->result_symbol = DEDENT;
        // printf("DEDENT E TRUE %d\n", current_indent_length - 2);
        result(true);
      } else if (indent_diff < 0 && indent_diff % 2 == 0) {
        if (consume_ordered_list_token(scanner, lexer)) {
          // array_push(&scanner->indents, current_indent_length - 2);
          array_pop(&scanner->indents);
          lexer->result_symbol = DEDENT;
          // printf("DEDENT F TRUE %d\n", current_indent_length - 2);
          result(true);
        }
      }
    }
    result(false);
  }

  if (valid_symbols[NEXT_ORDERED_LIST_TOKEN]) {
    if (consume_newline(scanner, lexer)) {
      int indent_length = consume_inline_whitespace(scanner, lexer);
      int indent_diff = indent_length - current_indent_length;
      if (indent_diff == 0 && consume_ordered_list_token(scanner, lexer)) {
        // printf("NEXT_ORDERED_LIST_TOKEN TRUE\n");
        // // printf("===================\n");
        lexer->mark_end(lexer);
    // printf("MARK_END------------------------------\n");
        lexer->result_symbol = NEXT_ORDERED_LIST_TOKEN;
        result(true);
      }
    }
    result(false);
  }

  result(false);
}

unsigned tree_sitter_enkidoc_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  size_t size = 0;
  buffer[size++] = scanner->done;
  // printf("SERIALIZE %d\n", scanner->done);
  uint32_t iter = 1;
  for (; iter < scanner->indents.size && size < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
    buffer[size++] = (char)*array_get(&scanner->indents, iter);
  }
  // printf("size %d\n", size);
  return size;
}

void tree_sitter_enkidoc_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  // printf("DESERIALIZE len: %d\n", length);
  Scanner *scanner = (Scanner *)payload;
  scanner->done = false;
  array_delete(&scanner->indents);
  array_push(&scanner->indents, 0);
  if (length > 0) {
    size_t size = 0;
    scanner->done = buffer[size++];
    // printf("DESERIALIZE done: %d\n", scanner->done);
    for (; size < length; size++) {
      array_push(&scanner->indents, (unsigned char)buffer[size]);
    }
  }
}

void *tree_sitter_enkidoc_external_scanner_create() {
    Scanner *scanner = calloc(1, sizeof(Scanner));
    scanner->done = false;
    array_init(&scanner->indents);
    tree_sitter_enkidoc_external_scanner_deserialize(scanner, NULL, 0);
    return scanner;
}

void tree_sitter_enkidoc_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    array_delete(&scanner->indents);
    free(scanner);
}
