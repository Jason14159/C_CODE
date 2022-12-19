#include <stdio.h>
#include <string.h>

typedef struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} BOOK;

void main() {
    BOOK book;

    strcpy(book.title, "C tutorial");
    strcpy(book.author, "Teacher Wang");
    strcpy(book.subject, "Programming Language");
    book.book_id = 12345;
    printf("Book title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Subject: %s\n", book.subject);
    printf("Book ID: %d\n", book.book_id);
} 
