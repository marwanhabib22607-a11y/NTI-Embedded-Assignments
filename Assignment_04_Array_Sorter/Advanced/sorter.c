#include <stdio.h>
#include "sorter.h"

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[])
{
    register int i;
    register int j;

    for (i = 0; i < SIZE - 1; i++)
    {
        for (j = 0; j < SIZE - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}