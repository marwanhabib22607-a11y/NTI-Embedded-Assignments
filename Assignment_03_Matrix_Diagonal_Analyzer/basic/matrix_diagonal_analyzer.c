#include <stdio.h>

void searchElement(int *ptr, int target);

int main()
{

    int arr[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int search = 0;
    printf("Enter your Target Number: ");
    scanf("%d", &search);

    searchElement(&arr[0][0], search);
}

void searchElement(int *ptr, int target)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (*(ptr + (i * 3) + j) == target)
                printf("Number %d is at row %d and column %d", target, i + 1, j + 1);
            else
                continue;
        }
    }
}
