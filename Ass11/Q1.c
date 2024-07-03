#include <stdio.h>
#include <string.h>

struct lib_books {
    char title[20];
    char author[15];
    int pages;
    float price;
};

int main() {
    struct lib_books book1;
    strcpy(book1.title, "Introduction to C");
    strcpy(book1.author, "Dennis");

    book1.pages = 100;
    book1.price = 450.00;

    printf("\nTitle : %s\nAuthor : %s\nPages : %d\nPrice : Rs.%f\n", book1.title, book1.author, book1.pages, book1.price);
    return 0;
}
