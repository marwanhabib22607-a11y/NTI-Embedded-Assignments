#include <stdio.h>

int sumMainDiagonal(int matrix[3][3])
{
    int i;
    int sum = 0;

    for (i = 0; i < 3; i++)
    {
        sum += matrix[i][i];
    }

    return sum;
}

void searchElement(int *ptr, int target)
{
    int i;

    for (i = 0; i < 9; i++)
    {
        if (*(ptr + i) == target)
        {
            printf("Element found at row %d column %d\n", (i / 3)+1, (i % 3)+1);
            return;
        }
    }

    printf("Element not found\n");
}

int main()
{
    int matrix[3][3];
    int i, j;
    int target;

    printf("Enter the elements of the 3x3 matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of main diagonal = %d\n", sumMainDiagonal(matrix));

    printf("Enter element to search: ");
    scanf("%d", &target);

    searchElement(&matrix[0][0], target);

    return 0;
}