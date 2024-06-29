#include <stdio.h>

int main() {
    int row, column;
    int my_array[3][3] = {{10,23,42}, {1,654,0}, {652,22,0}};
    for (row=0; row<=2; row++) {
        for(column=0; column<=2; column++) {
            printf("%d\t", my_array[row][column]);
        }
    }
    return 0;
}

