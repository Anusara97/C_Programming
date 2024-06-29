#include <stdio.h>

int main() {
    int p [] = {5, 6, 9, 25, 32};
    int q [] = {50, 63, 29, 5, 12};
    int r [5];

    printf("Index\tP + Q = R\n");
    for (int i=0; i<5; i++) {
        r[i] = p[i] + q[i];
        printf("%d\t%d + %d = %d\n", i, p[i], q[i], r[i]);
    }
    return 0;
}
