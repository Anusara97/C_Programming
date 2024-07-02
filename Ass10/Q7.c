#include <stdio.h>

int main () {
    int A [] = {1, 3, 5, 7, 9};
    int B [] = {2, 4, 6, 8, 10};
    int C [10];

    int *p = C;

    for (int i=0; i<5; i++) {
        *p = A[i];
        p += 2;
    }

    p = &C[1];

    for (int i=0; i<5; i++) {
        *p = B[i];
        p += 2;
    }

    p = C;

    for (int i=0; i<10; i++) {
        printf("%d ", *p);
        p++;
    }

    printf("\n");
    return 0;
}

