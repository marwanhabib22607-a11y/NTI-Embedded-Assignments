#include <stdio.h>
#include "string_utils.h"

int main()
{
    char str[100];

    printf("Enter a word: ");
    scanf("%99s", str);

    modifyString(str);

    printf("Modified String: %s\n", str);
    printf("Vowel Count: %d\n", vowelCount);

    return 0;
}