#include <stdio.h>
#include <string.h>

typedef struct lib_books {
    char title[20];
    char author[15];
    int pages;
    float price;
}lib_books;

int main() {
    lib_books Books[5];
    char p;

    printf("=====Enter the book details=====\n\n");
    for (int i=0; i<5; i++) {
        printf("\tBook No %d:\n", i+1);
        printf("Book Title: ");
        fgets(Books[i].title, sizeof(Books[i].title), stdin);
        Books[i].title[strcspn(Books[i].title, "\n")] = '\0';

        printf("Author: ");
        fgets(Books[i].author, sizeof(Books[i].author), stdin);
        Books[i].author[strcspn(Books[i].author, "\n")] = '\0';

        printf("No of Pages: ");
        scanf("%d", &Books[i].pages);
        scanf("%c", &p);

        printf("Price: ");
        scanf("%f", &Books[i].price);
        scanf("%c", &p);
        printf("\n\n");
    }

    printf("\t\tLow Price Books\n");
    for (int i = 0; i < 5; i++) {
        if (Books[i].price < 2000.00) {
            printf("Title: %s\nAuthor: %s\nPages: %d\nPrice: %.2f\n\n",
                   Books[i].title, Books[i].author, Books[i].pages, Books[i].price);
        }
    }

    return 0;
}

