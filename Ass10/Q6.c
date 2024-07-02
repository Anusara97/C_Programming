#include <stdio.h>

int main() {
    int arr1 [10];
    int arr2 [10];
    int *p = arr2;

    printf("Enter the values:\n");
    for (int i = 0; i<10; i++) {
        scanf("%d", &arr1[i]);
    }

    memcpy(arr2, arr1, sizeof(arr1));

    printf("Values:\n");
    for (int i = 0; i<10; i++) {
        printf("%d ", *p);
        p++;
    }

    return 0;
}
