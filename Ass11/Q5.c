#include <stdio.h>
#include <string.h>

typedef struct Participant{
        char name[20];
        char country[20];
        float score;
        int age;
}Participant;

int main() {
    Participant p1, p2 = {"Sangakkara", "SriLanka", 89.5, 38};
    strcpy(p1.country, p2.country);

    strcpy(p1.name,"Mahela");
    p1.score = 66;
    p1.age = 37;

    Participant p [] = {p1, p2};

    printf("Player Details:\n");
    for (int i=0; i<2; i++) {
        printf("Player name: %s\nCountry: %s\nScore: %.1f\nAge: %d\n", p[i].name, p[i].country, p[i].score, p[i].age);
        printf("\n");
    }

    return 0;
}
