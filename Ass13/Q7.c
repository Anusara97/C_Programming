#include <stdio.h>
#include <string.h>

struct student {
    char id[15];
    char name[60];
    float points;
};
void setData (struct student *ptr);
void Display(struct student *ptr);

int main() {
    struct student s[3];
    struct student *ptr = s;

    setData(ptr);
    Display(ptr);

    return 0;
}

void setData(struct student *ptr) {
    char p;
    printf("====Enter Details====\n");
    for (int i=0; i<3; i++) {
        printf("Student No. %d\n", i+1);
        printf("Enter ID: ");
        scanf("%d", &(ptr[i].id));
        scanf("%c", &p);

        printf("Enter Name: ");
        fgets(ptr[i].name, sizeof(ptr[i].name), stdin);
        ptr[i].name[strcspn(ptr[i].name, "\n")] ='\0';

        printf("Enter Points: ");
        scanf("%f", &(ptr[i].points));
        scanf("%c", &p);

        printf("\n\n");
    }
}

void Display(struct student *ptr) {
    printf("====Students Details====\n");
    for (int i=0; i<3; i++) {
        printf("Id: %d\nName: %s\nPoints: %.2f\n\n", ptr[i].id, ptr[i].name, ptr[i].points);
    }
}
