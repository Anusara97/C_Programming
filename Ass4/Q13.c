#include <stdio.h>

int main() {
    int Y;
    printf("Enter a year: ");
    scanf("%d", &Y);

    if ((Y%4) == 0) {
        if ((Y%100) == 0) {
            if ((Y%400) == 0) {
                printf("%d is a Leap Year!\n", Y);
            } else {
                printf("%d is not a Leap Year!\n", Y);
            }
        } else {
            printf("%d is a Leap Year!\n", Y);
        }
    } else {
        printf("%d is not a Leap Year!\n", Y);
    }

    if ((Y%100) == 0) {
        if ((Y%400) == 0) {
            printf("%d is a Leap Year!\n", Y);
        } else {
            printf("%d is not a Leap Year!\n", Y);
        }
    } else {
        printf("%d is a Leap Year!\n", Y);
    }

    return 0;
}

