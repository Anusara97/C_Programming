#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num%2) == 0) {
        printf("\nEntered number is Even!\n");
    } else {
        printf("\nEntered number is Odd!\n");
    }

    return 0;
}
