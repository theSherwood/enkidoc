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
  FIRST_ORDERED_LIST_TOKEN,
  NEXT_ORDERED_LIST_TOKEN,
  LIST_ITEM_CONTENT_END,
  LIST_ITEM_CONTENT_CONT,
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

void print_valid(const bool *valid_symbols) {
  int i = 0;
  printf("valid: ");
  for (; i <= DEBUG; i++) {
    if (i == LINE_START) printf(" LNS ");
    else if (i == LINE_END) printf(" LNE ");
    else if (i == INDENT) printf(" IND ");
    else if (i == DEDENT) printf(" DED ");
    else if (i == END_OF_FILE) printf(" EOF ");
    else if (i == FIRST_ORDERED_LIST_TOKEN) printf(" FOT ");
    else if (i == NEXT_ORDERED_LIST_TOKEN) printf(" NOT ");
    else if (i == LIST_ITEM_CONTENT_CONT) printf(" LIC ");
    else if (i == LIST_ITEM_CONTENT_END) printf(" LIE ");
    else if (i == DEBUG) printf(" DBG ");
    printf("%d ", valid_symbols[i]);
  }
  printf("\n");
}

bool tree_sitter_enkidoc_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;

  print_valid(valid_symbols);

  char c = lexer->lookahead;

  if (lexer->eof(lexer))     printf("scan <eof>\n" );
  else if (c == '\n')        printf("scan <newline>\n");
  else if (c == ' ')         printf("scan <space>\n");
  else if (c == '\t')        printf("scan <tab>\n");
  else                       printf("scan %c\n", lexer->lookahead);

  if (scanner->done) {
    printf("DONE\n");
    return false;
  }

  // if (valid_symbols[LIST_ITEM_CONTENT_END]) {
  //   printf("LIST_ITEM_CONTENT_END?\n");
  //   lexer->mark_end(lexer);
  //   if (consume_blank_line(scanner, lexer)) {
  //     lexer->result_symbol = LIST_ITEM_CONTENT_END;
  //     printf("LIST_ITEM_CONTENT_END TRUE\n");
  //     return true;
  //   }
  //   if (consume_newline(scanner, lexer)) {
  //     int whitespace = consume_inline_whitespace(scanner, lexer);
  //     printf("whitespace %d\n", whitespace);
  //     if (consume_ordered_list_token(scanner, lexer)) {
  //       lexer->result_symbol = LIST_ITEM_CONTENT_END;
  //       printf("LIST_ITEM_CONTENT_END TRUE\n");
  //       return true;
  //     }
  //     if (lexer->eof(lexer)) {
  //       lexer->result_symbol = LIST_ITEM_CONTENT_END;
  //       printf("LIST_ITEM_CONTENT_END TRUE\n");
  //       return true;
  //     }
  //   }
  //   if (lexer->eof(lexer)) {
  //     lexer->result_symbol = LIST_ITEM_CONTENT_END;
  //     printf("LIST_ITEM_CONTENT_END TRUE\n");
  //     return true;
  //   }
  //   printf("LIST_ITEM_CONTENT_END FALSE\n");
  //   return false;
  // }

  if (lexer->eof(lexer)) {
    lexer->result_symbol = END_OF_FILE;
    scanner->done = true;
    printf("eof\n");
    return true;
  }

  // if (valid_symbols[DEBUG]) {
  //   printf("DEBUG!!! %d\n", DEBUG);
  //   return true;
  // }

  uint16_t current_indent_length = 0;
  if (scanner->indents.size > 0) {
    current_indent_length = *array_back(&scanner->indents);
  }

  if (valid_symbols[LIST_ITEM_CONTENT_CONT] &&
      valid_symbols[NEXT_ORDERED_LIST_TOKEN] &&
      valid_symbols[INDENT]) {
    printf("LIST_ITEM_CONTENT_CONT?\n");
    lexer->mark_end(lexer);
    if (lexer->eof(lexer)) return false;
    if (consume_newline(scanner, lexer)) {
      printf("//////////////////////\n");
      int indent_length = consume_inline_whitespace(scanner, lexer);
      int indent_diff = indent_length - current_indent_length;
      if (indent_diff == 0 && consume_ordered_list_token(scanner, lexer)) {
        printf("NEXT_ORDERED_LIST_TOKEN TRUE\n");
        // printf("===================\n");
        lexer->mark_end(lexer);
        lexer->result_symbol = NEXT_ORDERED_LIST_TOKEN;
        return true;
      }
      printf("whitespace %d\n", indent_length);
      if (lexer->eof(lexer)) return false;
      if (consume_newline(scanner, lexer)) return false;
      if (scanner->indents.size > 0) {
        if (indent_diff == 2 || indent_diff == 4) {
          printf("diff %d\n", indent_diff);
          if (consume_ordered_list_token(scanner, lexer)) {
            array_push(&scanner->indents, indent_length);
            lexer->result_symbol = INDENT;
            printf("INDENT TRUE\n");
            return true;
          }
        }
      }
      {
        printf("LIST_ITEM_CONTENT TRUE\n");
        lexer->result_symbol = LIST_ITEM_CONTENT_CONT;
        return true;
      }
    }
    return false;
  }

  if (valid_symbols[FIRST_ORDERED_LIST_TOKEN]) {
    printf("FIRST_ORDERED_LIST_TOKEN\n");
    int indent_length = consume_inline_whitespace(scanner, lexer);
    int indent_diff = indent_length - current_indent_length;
    if (indent_diff == 0 && consume_ordered_list_token(scanner, lexer)) {
      // printf("===================\n");
      lexer->mark_end(lexer);
      lexer->result_symbol = FIRST_ORDERED_LIST_TOKEN;
      printf("FIRST_ORDERED_LIST_TOKEN TRUE\n");
      return true;
    }
    return false;
  }


  // if (valid_symbols[NEXT_ORDERED_LIST_TOKEN]) {
  //   if (c == '\n') {
  //     skip(lexer);
  //     if (consume_ordered_list_token(scanner, lexer)) {
  //       lexer->mark_end(lexer);
  //       lexer->result_symbol = NEXT_ORDERED_LIST_TOKEN;
  //       return true;
  //     }
  //   }
  //   return false;
  // }

  // if (true) {
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

  printf("||||||||||||||||\n");

  // if (valid_symbols[DEDENT]) {
  //   if (consume_newline(scanner, lexer)) {
  //     int indent_length = consume_inline_whitespace(scanner, lexer);
  //     int indent_diff = indent_length - current_indent_length;
  //   }
  //   return false;
  // }

  // if (c != ' ' && c != '\n' && c != '\t' && c != '\r') {
  //   // printf("FAIL\n");
  //   return false;
  // }

  // bool found_end_of_line = false;
  // uint32_t indent_length = 0;
  // int32_t first_comment_indent_length = -1;
  // for (;;) {
  //     if (lexer->lookahead == '\n') {
  //         found_end_of_line = true;
  //         indent_length = 0;
  //         skip(lexer);
  //     } else if (lexer->lookahead == ' ') {
  //         indent_length++;
  //         skip(lexer);
  //     } else if (lexer->lookahead == '\r' || lexer->lookahead == '\f') {
  //         indent_length = 0;
  //         skip(lexer);
  //     } else if (lexer->lookahead == '\t') {
  //         indent_length += 8;
  //         skip(lexer);
  //     } else if (lexer->eof(lexer)) {
  //         indent_length = 0;
  //         found_end_of_line = true;
  //         break;
  //     } else {
  //         break;
  //     }
  // }

  // if (found_end_of_line) {
  //   if (scanner->indents.size > 0) {
  //     uint16_t current_indent_length = *array_back(&scanner->indents);
  //     if (valid_symbols[INDENT] && indent_length > current_indent_length) {
  //       array_push(&scanner->indents, indent_length);
  //       lexer->result_symbol = INDENT;
  //       // printf("indent\n");
  //       return true;
  //     }
  //     if (valid_symbols[DEDENT] && indent_length < current_indent_length) {
  //       array_pop(&scanner->indents);
  //       lexer->result_symbol = DEDENT;
  //       // printf("dedent\n");
  //       return true;
  //     }
  //   }
  // }

  printf("FALSE - NO MATCH\n");
  return false;
}

unsigned tree_sitter_enkidoc_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  size_t size = 0;
  buffer[size++] = scanner->done;
  printf("SERIALIZE %d\n", scanner->done);
  uint32_t iter = 1;
  for (; iter < scanner->indents.size && size < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
    buffer[size++] = (char)*array_get(&scanner->indents, iter);
  }
  printf("size %d\n", size);
  return size;
}

void tree_sitter_enkidoc_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  printf("DESERIALIZE len: %d\n", length);
  Scanner *scanner = (Scanner *)payload;
  scanner->done = false;
  array_delete(&scanner->indents);
  array_push(&scanner->indents, 0);
  if (length > 0) {
    size_t size = 0;
    scanner->done = buffer[size++];
    printf("DESERIALIZE done: %d\n", scanner->done);
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

/*


===============================================================================|
Ordered List 2
===============================================================================|

+ item a
+ item b
+ item c

-------------------------------------------------------------------------------|
(source_file
  (block_list
    (block
      (ordered_list
        items: (ordered_list_item)
        items: (ordered_list_item)
        items: (ordered_list_item)))))

===============================================================================|
Ordered List 3
===============================================================================|

+ item a
this line is part of the list item above

-------------------------------------------------------------------------------|
(source_file
  (block_list
    (block
      (ordered_list
        items: (ordered_list_item)))))

===============================================================================|
Ordered List 4
===============================================================================|

+ item a
this line is part of the list item above
as is this line
+ item b
  same sort of thing
  but with an
  indented hard wrap
+ item c

-------------------------------------------------------------------------------|
(source_file
  (block_list
    (block
      (ordered_list
        items: (ordered_list_item)
        items: (ordered_list_item)
        items: (ordered_list_item)))))

===============================================================================|
Ordered List 5
===============================================================================|

+ item a
this line is part of the list item above
as is this line
+ item b
  same sort of thing
  but with an
  indented hard wrap

+ item c
+ item d

-------------------------------------------------------------------------------|
(source_file
  (block_list
    (block
      (ordered_list
        items: (ordered_list_item)
        items: (ordered_list_item)))
    (block
      (ordered_list
        items: (ordered_list_item)
        items: (ordered_list_item)))))

===============================================================================|
Ordered List with depth 1
===============================================================================|
+ a
  + aa 
-------------------------------------------------------------------------------|
(source_file
  (block_list
    (block
      (ordered_list
        items: (ordered_list_item
                 children: (ordered_list
                             items: (ordered_list_item)))))))

*/