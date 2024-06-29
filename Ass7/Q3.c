#include <stdio.h>

int main() {
    int fibonacci[20]; // Array to hold the first 20 Fibonacci numbers

    // Initialize the first two elements
    fibonacci[0] = 1;
    fibonacci[1] = 1;

    // Calculate the next elements in the Fibonacci sequence
    for (int i = 2; i < 20; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    // Print the first 20 elements of the Fibonacci sequence
    printf("The first 20 elements of the Fibonacci sequence are:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");

    return 0;
}
