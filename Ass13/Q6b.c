#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    Student *s = (Student *)malloc(5*sizeof(Student));
    char p;

    printf("=====Enter Student Details=====\n\n");
    for(int i=0; i<5; i++) {
        printf("===Student 0%d===\n", i+1);
        printf("Enter Id: ");
        scanf("%d", &(s[i].id));
        scanf("%c", &p);

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")]='\0';

        printf("Enter Average Marks: ");
        scanf("%f", &(s[i].avg_marks));
        scanf("%c", &p);

        printf("\nEnter School Details\n");
        printf("Enter Id: ");
        scanf("%d", &(s[i].Details.id));
        scanf("%c", &p);

        printf("Enter Name: ");
        fgets(s[i].Details.name, sizeof(s[i].Details.name), stdin);
        s[i].Details.name[strcspn(s[i].Details.name, "\n")]='\0';
        printf("\n\n");
    };

    printf("=====Student Details=====\n\n");
    for (int i=0; i<5; i++) {
        printf("ID: %d\nName: %s\nAverage Marks: %.2f\n\n======School Details======\nName: %d\nName: %s\n\n", s[i].id, s[i].name, s[i].avg_marks, s[i].Details.id, s[i].Details.name);
    }

    return 0;
}


