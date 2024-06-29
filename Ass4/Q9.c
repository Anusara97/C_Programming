#include <stdio.h>

int main() {
    int m;
    printf("Enter the marks for CSC1113: ");
    scanf("%d", &m);

    if (m >= 70) {
        printf("You have Grade A!\n");
    } else if (m >= 60) {
        printf("You have Grade B!\n");
    } else if ( m >= 50) {
        printf("You have Grade C!\n");
    } else if (m >= 40){
        printf("You have Grade D!\n");
    } else if (m >= 30) {
        printf("You have Grade E!\n");
    } else {
        printf("You have Grade F!\n");
    }
    return 0;
}
