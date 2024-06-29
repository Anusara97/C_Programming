#include <stdio.h>

int main() {
    float years, days;
    printf("Please type your age in years:");
    scanf("%f", &years);
    days = years * 365;
    printf("You are %.0f days old\n", days);
}
