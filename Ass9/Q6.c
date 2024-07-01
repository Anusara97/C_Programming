#include <stdio.h>

int main() {
    int a, b;
    int *p, *q;

    a = 2;
    b = 8;
    p =&a;
    q =&b;

    printf("The address of a: %p and value of a: %d\n", &a, a);
    printf("The value of p: %p and the value of *p: %d\n", p, *p);
    printf("The address of b: %p and value of b: %d\n", &b, b);
    printf("The value of q: %p and the value of *p: %d\n", q, *q);
    printf("The address of p: %p\n", &p);
    printf("The address of q: %p\n", &q);
    return 0;
}


