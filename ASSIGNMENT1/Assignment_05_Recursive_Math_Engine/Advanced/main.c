#include <stdio.h>
#include "math_engine.h"

int main()
{
    int base;
    int exponent;
    int number;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%d ^ %d = %d\n", base, exponent, power(base, exponent));

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Sum of digits = %d\n", sumDigits(number));

    printf("Number of recursive calls = %d\n", numberOfCalls);

    return 0;
}