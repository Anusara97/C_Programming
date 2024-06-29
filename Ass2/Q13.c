#include <stdio.h>

int main() {
    int day, d, m, y;
    printf("Enter number of days: ");
    scanf("%d", &d);
    y = d/365;

    m = (d%365)/30;

    day = (d%365)%30;

    printf("%d is equivalent to %d Years : %d Months : %d Days\n", d,y,m,day );

    return 0;
}
