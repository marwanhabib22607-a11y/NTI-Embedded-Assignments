#include <stdio.h>

int vowelCount = 0;

void modifyString(char *str)
{
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            vowelCount++;
        }

        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - ('a' - 'A');
        }

        str++;
    }
}

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