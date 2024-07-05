#include <stdio.h>
#include <string.h>

typedef struct Emp{
    char fname[20]; /* first name */
    char lname[20]; /* last name */
    int age; /* age */
    int rate; /* e.g. 12 per hour */
}Emp;

int main() {

    Emp e[5];
    Emp *ptr;
    ptr = e;
    char p;

    printf("Enter employee details:\n\n");
    for (int i=0; i<5; i++) {
        printf("\tEmployee No: %d\n", i+1);
        printf("First Name: ");
        fgets(e[i].fname, sizeof(e[i].fname), stdin);
        e[i].fname[strcspn(e[i].fname,"\n")] = '\0';

        printf("Last Name: ");
        fgets(e[i].lname, sizeof(e[i].lname), stdin);
        e[i].lname[strcspn(e[i].lname,"\n")] = '\0';

        printf("Age: ");
        scanf("%d", &e[i].age);
        scanf("%c", &p);

        printf("Rate: ");
        scanf("%d", &e[i].rate);
        scanf("%c", &p);
        printf("\n");
    }

    printf("======Employee List======\n");
    for (int i=0; i<5; i++) {
        printf("\tEmployee No: %d\n", i+1);
        printf("First Name: %s\nLast Name: %s\nAge: %d\nRate: %d\n\n", ptr->fname, ptr->lname, ptr->age, ptr->rate);
    }

    return 0;
}
