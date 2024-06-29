#include <stdio.h>

int maxNum(int, int, int);
int main(){
    int a, b, c;

    printf("Enter numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("The max number is %d\n", maxNum(a,b,c));
    return 0;
}

int maxNum(int x, int y, int z){
    if(x>y) {
        if (x>z) {
            return x;
        } else {
            return z;
        }
    } else if(y>z) {
        return y;
    } else {
        return z;
    }
}
