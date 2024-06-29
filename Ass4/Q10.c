#include <stdio.h>

int main() {
    int num1, num2, ans;
    char Op;
    printf("Enter the numbers and Operations following Order\nEg: 2+3\n");
    scanf("%d", &num1);
    scanf("%c", &Op);
    scanf("%d", &num2);

    if (Op == '+') {
        ans = num1 + num2;
        printf("Answer of %d + %d = %d\n", num1, num2, ans);
    } else if (Op == '-') {
        ans = num1 - num2;
        printf("Answer of %d - %d = %d\n", num1, num2, ans);
    } else if (Op == '/') {
        if (num2 == 0) {
            printf("Invalid Operation!");
        }else {
            ans = num1 / num2;
            printf("Answer of %d / %d = %d\n", num1, num2, ans);
        }
    } else if (Op == '*') {
        ans = num1 * num2;
        printf("Answer of %d * %d = %d\n", num1, num2, ans);
    } else {
        printf("Invalid Operation!\n");
    }
    return 0;
}
