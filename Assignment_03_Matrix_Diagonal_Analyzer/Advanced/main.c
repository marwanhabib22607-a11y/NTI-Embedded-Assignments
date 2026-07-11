#include <stdio.h>
#include "matrix.h"

int main()
{
    int matrix[ROWS][COLS];
    int i, j;
    int target;

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of main diagonal = %d\n", sumMainDiagonal(matrix));

    printf("Enter element to search: ");
    scanf("%d", &target);

    searchElement(&matrix[0][0], target);

    return 0;
}