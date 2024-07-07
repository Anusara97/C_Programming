#include <stdio.h>

int main () {
    int num1[] = {1,3,5,7,9};
    int num2 []= {2,4,6,8,10};
    int num3 [10];

    int *p1 = &num1;
    int *p2 = &num2;
    int *p3 = &num3;


    //assigning elements of num1 to num3
    for (int i=0; i<5; i++) {
        *p3 = *p1;
        (p3)+= 2;
        p1++;
    }

    //assigning elements of num1 to num3
    p3 =&num3[1];
    for (int i=0; i<5; i++) {
        *p3 = *p2;
        (p3)+= 2;
        p2++;
    }
    //Display elements in the array num3
    p3 = num3;
    printf("====Array Elements:====\n");
    for (int i=0; i<10; i++) {
        printf("%d ", *p3);
        p3++;
    }
    printf("\n");
    return 0;
}
