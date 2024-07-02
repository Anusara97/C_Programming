#include <stdio.h>
char strA[40] = "For testing purpose";
char strB[40];

int main () {
    char *pA;
    char *pB;
    puts(strA); //Display strA

    pA = strA;
    pB = strB;
    printf("\n");

    while(*pA != '\0') {
        *pB = *pA; /* Line B - Copy character from strA to strB */
        pA++;      /* Move to the next character in strA */
        pB++;
    }

    *pB = '\0';
    printf("%s\n", strB);

    return 0;
}

