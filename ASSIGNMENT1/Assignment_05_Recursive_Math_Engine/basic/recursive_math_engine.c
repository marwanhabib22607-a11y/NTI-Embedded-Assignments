#include <stdio.h>

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    return base * power(base, exponent - 1);
}

int sumDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (n % 10) + sumDigits(n / 10);
}

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

    return 0;
}