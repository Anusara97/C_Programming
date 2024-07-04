#include <stdio.h>
#include <string.h>

struct Emp{
    char lname[20]; /* last name */
    char fname[20]; /* first name */
    int age; /* age */
    int rate; /* e.g. 12 per hour */
};

int main() {
    struct Emp employee1; /* declare the structure variable */
    struct Emp *pEmp; /*declare the pointer to structure */
    pEmp=&employee1;

    strcpy(employee1.lname,"Kumara");
    strcpy(employee1.fname,"Saman");
    employee1.age=27;
    employee1.rate=13;

    printf("first name=%s\n",pEmp->fname);
    printf("last name=%s\n",pEmp->lname);
    printf("age=%d\n",pEmp->age);
    printf("rate=%d\n",pEmp->rate);
    return 0;
}
