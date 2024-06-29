#include <stdio.h>
#include <string.h>
#define Max 100

int main(){
    char Sport[5];

    printf("Enter 5 sports: ");
    for (int i=0; i<5; i++) {
        fgets(Sport[i], Max, stdin);
    }

    for (int i=0; i<5; i++) {
        printf(" %s", Sport[i]);
    }
    return 0;
}
