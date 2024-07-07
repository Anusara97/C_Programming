#include <stdio.h>
#include <string.h>

typedef struct Class {
    char ID[10];
    int Mat_Maraks;
    int Che_Maraks;
    int Phy_Maraks;
}Class;


void Display(Class c []);
void Search(Class c [], char Id [20]);
void Average(Class c [], float eAvg);

int main () {
    Class c [10];
    char p;
    char std_ID [10];
    float eAvg = 0.0;

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

    printf("====Find Student====\nEnter Student ID: ");
    fgets(std_ID, sizeof(std_ID), stdin);
    std_ID[strcspn(std_ID,"\n")] = '\0';

    Search(c, std_ID);

    printf("\nEnter Expected Average: ");
    scanf("%f", &eAvg);

    Average(c, eAvg);
    return 0;
}

void Display(Class c []) {
    printf("====Students Details\n====");
    for(int i=0; i<5; i++) {
        printf("ID: %s\nMaths Marsks: %d\nChemistry Marks: %d\nPhysics Marsks: %d\n\n", c[i].ID, c[i].Mat_Maraks, c[i].Che_Maraks, c[i].Phy_Maraks);
    }
}

void Search(Class c [], char Id [20]) {
    int k =0;
    for (int i=0; i<5; i++) {
        if (strcmp(c[i].ID, Id) == 0) {
            printf("ID: %s\nMaths Marsks: %d\nChemistry Marks: %d\nPhysics Marsks: %d\n\n", c[i].ID, c[i].Mat_Maraks, c[i].Che_Maraks, c[i].Phy_Maraks);
            k = 1;
            break;
        }
    }
    if(k == 0){
        printf("\nThis Student Not in the Class!\n");
    }
}

void Average(Class c [], float eAvg) {
    float avg [10];

    for (int i=0; i<5; i++) {
        avg[i] = (c[i].Mat_Maraks +c[i].Che_Maraks +c[i].Phy_Maraks)/3.0;
    }

    printf("\n====Students who have average above the expected value====\n");
    for (int i=0; i<5; i++) {
        if(avg[i] >= eAvg){
            printf("ID: %s\nAverage: %f\n\n", c[i].ID, avg[i]);
        }
    }


}
