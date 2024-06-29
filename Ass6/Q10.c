#include <stdio.h>

int main () {
    int twoDArr[2][2];

    //geting elements
    //printf("Enter numbers:\n");
    for(int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("Enter numbers:");
            scanf("%d", &twoDArr[i][j]);
        }
    }

    printf("\nArray Elements\n");
    for(int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("%d ", twoDArr[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal Elements\n");
    for(int i=0; i<2; i++) {
        printf("%d ", twoDArr[i][i]);
    }
    return 0;
}
