#include <stdio.h>
#include <string.h>

int main () {
    char fname [15];
    char lname [15];
    char ffname [30];

    printf("Enter your first name: ");
    scanf("%s", fname);

    printf("Enter your last name: ");
    scanf("%s", lname);

    strcpy(ffname,fname);
    strcat(ffname," ");
    strcat(ffname,lname);

    printf("\nYour full name is %s\n", ffname);
    return 0;
}

