#include <stdio.h>

int main() {
    int marks[] = {80, 90, 75, 61, 39, 46, 55, 93, 78, 37};

    float avg = 0.0;

    for(int i=0; i<10; i++) {
        avg += marks[i];
    }
    avg /= 10.0;

    printf("The average is : %.2f\n", avg);
    return 0;
}
