#include <stdio.h>

int factorial(int);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The factorial value of %d is %d\n", num, factorial(num));
    return 0;
}

int factorial(int x) {
    int fact =1;
    for (int i=1; i<=x; i++) {
        fact *=i;
    }
    return fact;
}
