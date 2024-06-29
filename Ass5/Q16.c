#include <stdio.h>

int main() {
    char response = 'y';

    while (response == 'y') {
        printf("Hello nice to meet you!\nDo you want to continue? ");
        scanf(" %c", &response);
        printf("\n");
    }

    return 0;
}
