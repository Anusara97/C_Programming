#include <stdio.h>

int main() {
    int j,k;
    int *ptr;

    j=1;
    k=2;
    ptr = &k;
    printf("\n");
    printf("J has value %d and is stored at %p\n", j, &j);
    printf("K has value %d and is stored at %p\n", k, &k);
    printf("ptr has value %p and is stored at %p\n", ptr, &ptr);
    printf("The value of the integer pointed to by ptr is %d\n", *ptr);
    return 0;
}

