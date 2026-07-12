#include <stdio.h>
#include "matrix.h"

volatile int found = 0;

int sumMainDiagonal(int matrix[ROWS][COLS])
{
    int i;
    int sum = 0;

    for (i = 0; i < ROWS; i++)
    {
        sum += matrix[i][i];
    }

    return sum;
}

void searchElement(int *ptr, int target)
{
    int i;

    found = 0;

    for (i = 0; i < ROWS * COLS; i++)
    {
        if (*(ptr + i) == target)
        {
            printf("Element found at row %d column %d\n", (i / COLS)+1, (i % COLS)+1);
            found = 1;
            return;
        }
    }

    if (!found)
    {
        printf("Element not found\n");
    }
}