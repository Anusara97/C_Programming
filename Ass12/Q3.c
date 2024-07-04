#include <stdio.h>
#include <string.h>

typedef struct _ {
    char name[20];
    int ID;
}std;

void addStudent (std[]);
void displayList(std[]);

int main() {
    std s[3];
    addStudent(s);
    displayList(s);
    return 0;
}

void addStudent (std s[]) {
    char p;
    printf("\tAdd details of students\n\n");
    for (int i=0; i<3; i++) {
        printf("Student No: %d\n", i+1);
        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("ID: ");
        scanf("%d", &s[i].ID);
        scanf("%c", &p);

        printf("\n\n");
    }
}

void displayList(std s[]) {
    printf("\t====Student List====\n\n");
    for (int i=0; i<3; i++) {
        printf("Name: %s\nId: %d\n", s[i].name, s[i].ID);
        printf("\n");
    }
}
