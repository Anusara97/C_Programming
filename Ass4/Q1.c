#include <stdio.h>

int main(){
    int a, b;

    printf("Enter values for A and B respectively: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b) {
        printf("A is greater than B!\n");
    } else {
        printf("B is greater than A!\n");
    }
    return 0;
}
