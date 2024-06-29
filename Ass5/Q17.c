#include <stdio.h>

int main() {
    int Choice, num1, num2, ans;
    char st = 'T';
    while (st == 'T') {
        printf("Calculator Menu\n");
        printf("\t1. Addition\n");
        printf("\t2. Substraction\n");
        printf("\t3. Multiplication\n");
        printf("\t4. Division\n");
        printf("\t5. Exit\n");

        printf("\n\tEnter Your Choice: ");
        scanf("%d", &Choice);
        if (Choice == 5) {
            st = "F";
            break;
        }
        printf("\n\tEnter First value: ");
        scanf("%d", &num1);
        printf("\n\tEnter Second value: ");
        scanf("%d", &num2);

        switch (Choice) {

        case 1:
            ans = num1 + num2;
            printf("\n\tAnswer : %d\n\n", ans);
            break;
        case 2:
            ans = num1 - num2;
            printf("\n\tAnswer : %d\n\n", ans);
            break;
        case 3:
            ans = num1 * num2;
            printf("\n\tAnswer : %d\n\n", ans);
            break;
        case 4:
            ans = num1 / num2;
            printf("\n\tAnswer : %d\n\n", ans);
            break;
        default:
            printf("\tInvalid Choice!\n\n");
        }
    }
    return 0;
}
