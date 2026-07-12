#include <stdio.h>
#include "transactions.h"

void processTransaction(float *balance, int type)
{
    static int transactionCount = 0;
    float amount;

    switch (type)
    {
        case DEPOSIT:

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

        case WITHDRAW:

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

        case EXIT:

            printf("Total valid transactions = %d\n", transactionCount);

            break;
    }
}