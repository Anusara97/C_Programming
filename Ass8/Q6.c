#include <stdio.h>

void makeFull(char [], char [], char[]);

int main() {
    char fName[15];
    char mName[15];
    char lName[15];

    printf("Enter your first Name: ");
    scanf("%s", fName);

    printf("Enter your middle Name: ");
    scanf("%s", mName);

    printf("Enter your last Name: ");
    scanf("%s", lName);

    makeFull(fName, mName, lName);
    return 0;
}

void makeFull(char fName[], char mName[], char lName[]) {
    char fullName[30];
    strcpy(fullName, fName);
    strcat(fullName, " ");
    strcat(fullName, mName);
    strcat(fullName, " ");
    strcat(fullName, lName);

    printf("Your full name is : %s", fullName);
}
