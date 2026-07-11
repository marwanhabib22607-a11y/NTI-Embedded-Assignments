#include <stdio.h>
#include "transactions.h"

int main()
{
    int choice;
    register int menuChoice;

    do
    {
        printf("\n===== ATM =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        menuChoice = choice;

        switch (menuChoice)
        {
            case DEPOSIT:
                processTransaction(&balance, DEPOSIT);
                break;

            case WITHDRAW:
                processTransaction(&balance, WITHDRAW);
                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                processTransaction(&balance, EXIT);
                printf("Thank you.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}