#include <stdio.h>

int main() {
    int num;
    float fl;
    char ch;

    int *numptr;
    float *flptr;
    char *chptr;

    num = 234;
    fl = 10.345;
    ch = 'a';

    numptr = &num;
    flptr = &fl;
    chptr = &ch;

    printf("The value of *numptr: %d, numptr: %p, &numptr: %p\n", *numptr, numptr, &numptr);
    printf("The value of *flptr: %f, flptr: %p, &flptr: %p\n", *flptr, flptr, &flptr);
    printf("The value of *chptr: %c, chptr: %p, &chptr: %p\n", *chptr, chptr, &chptr);
    (*chptr)++;
    printf("The value of *chptr: %c, chptr: %p, &chptr: %p\n", *chptr, chptr, &chptr);

    return 0;
}
