#include <stdio.h>

void processTransaction(float *balance, int type)
{
    static int transactionCount = 0;
    float amount;

    switch (type)
    {
        case 1:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                *balance += amount;
                transactionCount++;
                printf("Deposit successful.\n");
            }
            else
            {
                printf("Invalid amount.\n");
            }
            break;

        case 2:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= *balance)
            {
                *balance -= amount;
                transactionCount++;
                printf("Withdrawal successful.\n");
            }
            else
            {
                printf("Invalid transaction.\n");
            }
            break;

        case 0:
            printf("Total valid transactions: %d\n", transactionCount);
            break;
    }
}

int main()
{
    float balance = 0;
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
                processTransaction(&balance, 1);
                break;

            case 2:
                processTransaction(&balance, 2);
                break;

            case 3:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4:
                processTransaction(&balance, 0);
                printf("Thank you for using the ATM.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}