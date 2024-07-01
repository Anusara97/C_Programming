#include <stdio.h>

int main () {
    char ch [] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    for (int i=0; i<10; i++) {
        printf("%c ", ch[i]);
    }
    printf("\n");
    return 0;
}
