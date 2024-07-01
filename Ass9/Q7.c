#include <stdio.h>

int main() {
    int *cptr = (int*)25;
    printf("cptr before: %p\n", cptr);
    cptr++;
    printf("and after: %p\n", cptr);
    return 0;
}


