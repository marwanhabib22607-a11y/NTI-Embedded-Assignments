#include <stdio.h>
#include "sorter.h"

int main()
{
    int arr[SIZE];
    int i;

    printf("Enter %d integers:\n", SIZE);

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before sorting:\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr);

    printf("\n\nArray after sorting:\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}