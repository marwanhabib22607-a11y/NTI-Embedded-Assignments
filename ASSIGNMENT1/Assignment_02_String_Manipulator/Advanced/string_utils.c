#include <stdio.h>
#include "string_utils.h"

int vowelCount = 0;

void modifyString(char *str)
{
    static int numberOfCalls = 0;
    numberOfCalls++;

    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            vowelCount++;
        }

        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}