
#include <stdio.h>

int main() {
    int x, y, z;
    int *p, *q, *r;

    p =&x;
    q =&y;
    r =&z;

    printf("The value of x: %d, y: %d, z: %d\n", x,y,z);
    printf("The value of p: %p, q: %p, r: %p\n", p,q,r);
    printf("The value of *p: %d, *q: %d, *r: %d\n", *p,*q,*r);
    printf("Swapping pointors: \n");
    r = p;
    p = q;
    q = r;
    printf("The value of x: %d, y: %d, z: %d\n", x,y,z);
    printf("The value of p: %p, q: %p, r: %p\n", p,q,r);
    printf("The value of *p: %d, *q: %d, *r: %d\n", *p,*q,*r);

    return 0;
}
