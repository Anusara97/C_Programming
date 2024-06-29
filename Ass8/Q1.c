#include <stdio.h>

int main() {
    int x = 10, y =7;
    int v;
    printf("X = %d\n", x);
    v = cube(x);
    printf("Now X = %d\n\n", v);
    printf("Y = %d\n", y);
    v = cube(y);
    printf("Now Y = %d\n\n", v);

    return 0;
}

int cube (int c) {
    return c*c*c;
}
