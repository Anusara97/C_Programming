#include <stdio.h>
#include <string.h>

typedef struct Class {
    char ID[10];
    int Mat_Maraks;
    int Che_Maraks;
    int Phy_Maraks;
}Class;


void Display(Class c []);

int main () {
    Class c [10];
    char p;

    printf("====Enter Students Details\n====");

    for (int i=0; i<5; i++) {
        printf("Student No: %d\n", i+1);
        printf("Id: ");
        fgets(c[i].ID, sizeof(c[i].ID), stdin);
        c[i].ID[strcspn(c[i].ID, "\n")] = '\0';

        printf("Maths Marks: ");
        scanf("%d", &c[i].Mat_Maraks);
        scanf("%c", &p);

        printf("Chemistry Marks: ");
        scanf("%d", &c[i].Che_Maraks);
        scanf("%c", &p);

        printf("Physics Marks: ");
        scanf("%d", &c[i].Phy_Maraks);
        scanf("%c", &p);

        printf("\n");
    }

    Display(c);

    return 0;
}

void Display(Class c []) {
    printf("====Students Details\n====");
    for(int i=0; i<5; i++) {
        printf("ID: %s\nMaths Marsks: %d\nChemistry Marks: %d\nPhysics Marsks: %d\n\n", c[i].ID, c[i].Mat_Maraks, c[i].Che_Maraks, c[i].Phy_Maraks);
    }
}
