#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#define DEPOSIT 1
#define WITHDRAW 2
#define EXIT 0

extern float balance;

void processTransaction(float *balance, int type);

#endif