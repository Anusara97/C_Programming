#include <stdio.h>
#include <string.h>

typedef struct Date1{
        int day;
        int month;
        int year;
}Date1;

typedef struct Date2{
        int day;
        char month[20];
        int year;
}Date2;


int main() {
    Date1 d1;
    Date2 d2;

    d1.day = 25;
    d1.month = 2;
    d1.year = 2011;

    d2.day = d1.day;
    switch (d1.month) {
        case 1:
            strcpy(d2.month, "January");
            break;
        case 2:
            strcpy(d2.month, "February");
            break;
        case 3:
            strcpy(d2.month, "March");
            break;
        case 4:
            strcpy(d2.month, "April");
            break;
        case 5:
            strcpy(d2.month, "May");
            break;
        case 6:
            strcpy(d2.month, "June");
            break;
        case 7:
            strcpy(d2.month, "July");
            break;
        case 8:
            strcpy(d2.month, "August");
            break;
        case 9:
            strcpy(d2.month, "September");
            break;
        case 10:
            strcpy(d2.month, "October");
            break;
        case 11:
            strcpy(d2.month, "November");
            break;
        case 12:
            strcpy(d2.month, "December");
            break;
    }
    d2.year = d1.year;

    printf("Date: ");
    printf("%s %d, %d", d2.month, d2.day, d2.year);
    printf("\n");

    return 0;
}
