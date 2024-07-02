#include <stdio.h>

int main() {
    int arr [10];
    int *p = arr;

    printf("Enter the values:\n");
    for (int i = 0; i<10; i++) {
        scanf("%d", &arr[i]);
    }

    //display array elements using pointors
    printf("\nArray Elements: \n");
    for(int i = 0; i<10; i++) {
        printf("%d ", *p);
        p++;
    }

    return 0;
}
