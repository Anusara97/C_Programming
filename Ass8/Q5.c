#include <stdio.h>

void makeUpper(char);
void makeLower(char);

int main() {
    char a;
    printf("Enter a letter: ");
    scanf("%c", &a);

    if(a >= 65 && a<=90) {
        makeLower(a);
    } else if (a >= 97 && a<=122){
        makeUpper(a);
    } else {
        printf("Invalid character!\n");
    }
    return 0;
}

void makeLower(char x) {
    x += 32;
    printf("The lower case letter: %c\n", x);
}

void makeUpper(char x) {
    x -= 32;
    printf("The upper case letter: %c\n", x);
}
