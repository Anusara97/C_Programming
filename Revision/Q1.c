#include <stdio.h>
#include <math.h>

void Deposit(float *Balance);
void Withdraw(float *Balance);
void checkBalance(float *Balance);

int main() {
    int accNo, count, Op;
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
        printf("Choose your option: ");
        scanf("%d", &Op);

        switch (Op) {
        case 1:
            Deposit(&Balance);
            break;
        case 2:
            Withdraw(&Balance);
            break;
        case 3:
            checkBalance(&Balance);
            break;
        case 4:
            //
            printf("Thank you.\n");
            break;
        default:
            printf("Invalid Option!\n");
        }
    } else {
        printf("\nSomething went to wrong!\nPlease Check your account number!\n");
    }


}

void Deposit(float *Balance) {
    float dep;
    printf("Enter Deposit Amount: ");
    scanf("%d", &dep);
    *Balance += dep;
    printf("Cash Deposited!\nThank you!\n");
}

void Withdraw(float *Balance) {
    float dep;
    printf("Enter withdraw Amount: ");
    scanf("%d", &dep);
    *Balance -= dep;
    printf("Take your money!\nThank you!\n");
}

void checkBalance(float *Balance) {
    printf("Your Account balance is : Rs.%.2f\n", *Balance);
}
