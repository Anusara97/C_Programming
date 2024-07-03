#include <stdio.h>
#include <string.h>

struct student {
    int id_no;
    char name[20];
    char address[20];
    char combination[20];
    int age;
}newStudent;

int main() {
    newStudent.id_no = 10470;
    strcpy(newStudent.name, "Anusara Punchihewa");
    strcpy(newStudent.address, "Nupe, Matara");
    strcpy(newStudent.combination,"Maths CS Chemistry");
    newStudent.age = 27;

    printf("====Student Details====\n\n");
    printf("Id : %d\nName : %s\nAddress : %s\nCombination : %s\nAge : %d\n", newStudent.id_no, newStudent.name, newStudent.address, newStudent.combination, newStudent.age);
    return 0;
}
