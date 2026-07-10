#include <stdio.h>
#include "transaction.h"

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