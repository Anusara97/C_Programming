#include <stdio.h>

struct Song {
    char Name[25];
    float Length;
};

int main() {
    struct Song Title1;
    printf("The size of Title1 structure variable is %d bytes\n", sizeof(Title1));
    printf("Name your favorite song title: ");
    gets(Title1.Name);
    printf("How long is it? ");
    scanf("%f", &Title1.Length);
    printf("\nYour Song is %s ", Title1.Name);
    printf("And it is %.2f min. long.\n", Title1.Length);

    return 0;
}
