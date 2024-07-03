#include <stdio.h>
#include <string.h>

typedef struct ad {
    char name[20];
    int h_number;
    char street[20];
    char city[20];
    char country[20];
} Address;

int main() {
    Address a[5];
    char p;

    for (int i = 0; i < 5; i++) {
        printf("Enter name: ");
        fgets(a[i].name, sizeof(a[i].name), stdin);
        a[i].name[strcspn(a[i].name, "\n")] = 0; // Remove newline character

        printf("Enter house number: ");
        scanf("%d", &a[i].h_number);
        scanf("%c", &p); // Consume the newline character

        printf("Enter street: ");
        fgets(a[i].street, sizeof(a[i].street), stdin);
        a[i].street[strcspn(a[i].street, "\n")] = 0; // Remove newline character

        printf("Enter city: ");
        fgets(a[i].city, sizeof(a[i].city), stdin);
        a[i].city[strcspn(a[i].city, "\n")] = 0; // Remove newline character

        printf("Enter country: ");
        fgets(a[i].country, sizeof(a[i].country), stdin);
        a[i].country[strcspn(a[i].country, "\n")] = 0; // Remove newline character

        printf("\n\n");
    }

    for (int i = 0; i < 5; i++) {
        printf("Address: %d\n", i);
        printf("Name: %s\n", a[i].name);
        printf("House Number: %d\n", a[i].h_number);
        printf("Street: %s\n", a[i].street);
        printf("City: %s\n", a[i].city);
        printf("Country: %s\n", a[i].country);
        printf("\n");
    }

    return 0;
}
