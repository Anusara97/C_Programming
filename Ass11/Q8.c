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

typedef struct Emp {
    char name[20];
    float salary;
    Date1 d1;
}Employee;

int main() {
    Date2 d2;

    Employee P1;
    strcpy(P1.name, "Gamini");
    P1.salary = 57823.05;

    P1.d1.day = 10;
    P1.d1.month = 3;
    P1.d1.year = 2001;

    d2.day = P1.d1.day;
    switch (P1.d1.month) {
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
    d2.year = P1.d1.year;

    printf("====Details of Employee====\n\n");
    printf("Name: %s\nSalary: %.2f\nHired Date: ", P1.name, P1.salary);
    printf("%s %d, %d", d2.month, d2.day, d2.year);
    printf("\n");

    return 0;
}

