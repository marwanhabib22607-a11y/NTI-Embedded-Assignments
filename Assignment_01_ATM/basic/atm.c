#include <stdio.h>
void transaction(float *amount, int type);

int main()
{

    int type = 0;
    float total_balance = 0;
    do
    {
        printf("\nYour Account Total Balance is: %0.2f", total_balance);
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter your Choice: ");
        scanf("%d", &type);
        switch (type)
        {
        case 1:
            transaction(&total_balance, type);
            break;
        case 2:
            transaction(&total_balance, type);
            break;
        case 3:
            printf("Your Current Balance is: %0.2f", total_balance);
            break;
        case 4:
            break;
        default:
            printf("Invalid Input");
            break;
        }

    } while (type != 4);
}

void transaction(float *amount, int type)
{

    int cash=0;
    switch (type)
    {
    case 1:
        printf("Enter the cash amout to deposit: ");
        scanf("%d", &cash);
        *amount += cash;
        printf("Your currenct balance is %0.2f", *amount);
        break;
    case 2:
        printf("Enter the cash amout to withdraw: ");
        scanf("%d", &cash);
        *amount -= cash;
        printf("Your currenct balance is %0.2f", *amount);
        break;
    }
}