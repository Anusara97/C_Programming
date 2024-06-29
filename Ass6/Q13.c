#include <stdio.h>
#include  <string.h>

int main() {
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6,8,10};
    int arr3[10];
    int k = 0;

    for(int i=0; i<5; i++) {
        arr3[k++] = arr1[i];
        arr3[k++] = arr2[i];
    }

    printf("Elements of the array: ");
    for(int i=0; i<10; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
