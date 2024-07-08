#include <stdio.h>
#include <math.h>

int main() {
    int accNo, count;
    float Balance = 10000.00;

    printf("Enter your account number: ");
    scanf("%d", &accNo);

    count = (int)log10(abs(accNo)) + 1;

    //Assumption: An account number should contain 8 digits.

    if(count == 8) {
        printf("\n\t\tWelcome to ABC Bank - Sri Lanka\n\n");
        printf("Select the option according to your requirement\n");
        printf("\t1. Deposit\n\t2. Withdraw\n\t3. Check Account Balance\n\t4. Exit\n");
        printf("=================================================\n");
        printf("Choose your option: \n");
    } else {
        printf("\nSomething went to wrong!\nPlease Check your account number!\n");
    }


}

