#include <stdio.h>
#include <string.h>

typedef struct lib_books {
    char title[20];
    char author[15];
    int pages;
    float price;
}lib_books;

int main() {
    lib_books book1 = {"Introduction to C", "Arther", 200,560.00};
    printf("====Book Details====");
    printf("\nTitle: %s\nAuthor: %s\nPages: %d\nPrice: %.2f\n", book1.title, book1.author, book1.pages, book1.price);
    return 0;
}
