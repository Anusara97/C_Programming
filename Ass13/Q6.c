#include <stdio.h>
#include <string.h>

typedef struct College {
    int id;
    char name[20];
}Collage;

typedef struct Student {
    int id;
    char name[20];
    float avg_marks;
    Collage Details;
}Student;

int main () {
    Student s1;
    s1.id = 1;
    strcpy(s1.name, "Anusara");
    s1.avg_marks = 89.05;
    s1.Details.id =10;
    strcpy(s1.Details.name, "Rahula College");

    printf("======Student Details======\n\n");
    printf("ID: %d\nName: %s\nAverage Marks: %.2f\n\n======School Details======\nName: %d\nName: %s\n\n", s1.id, s1.name, s1.avg_marks, s1.Details.id, s1.Details.name);

    return 0;
}
