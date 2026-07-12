#include "math_engine.h"

int power(int base, int exponent)
{
    numberOfCalls++;

    if (exponent == 0)
    {
        return 1;
    }

    return base * power(base, exponent - 1);
}

int sumDigits(int n)
{
    numberOfCalls++;

    if (n == 0)
    {
        return 0;
    }

    return (n % 10) + sumDigits(n / 10);
}