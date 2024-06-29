#include <stdio.h>

int main () {
    int num [10];
    int key;

    printf("Enter 10 numbers: \n");
    for(int i=0; i<10; i++) {
        scanf(" %d", &num[i]);
    }
    printf("Enter Search key: ");
    scanf("%d", &key);

    for(int i=0; i<10; i++) {
       if (num[i]==key) {
        printf("%d is found!\n", key);
        break;
       }
       printf("Key is not found!\n");
    }

    return 0;
}
