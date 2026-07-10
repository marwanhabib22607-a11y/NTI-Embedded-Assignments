#include <stdio.h>
#include "transaction.h"

volatile float balance = 0;

int main()
{
    int choice;

    do
    {
        printf("\n===== ATM Menu =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                processTransaction((float *)&balance, 1);
                break;

            case 2:
                processTransaction((float *)&balance, 2);
                break;

            case 3:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4:
                processTransaction((float *)&balance, 0);
                printf("Thank you for using the ATM.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}