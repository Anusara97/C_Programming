#include <stdio.h>

void DisplayHeading(void);
int main(){
    printf("Hello, I'm about to call my DisplayHeading() function\n\n");
    DisplayHeading();
    printf("Now I'm back inside \"main\".\n");

    return 0;
}

void DisplayHeading(void) {
    printf("Hello! You are currently inside the DisplayHeading()");
    printf("function.\n");
    printf("Now it's time to go\n\n");
}
