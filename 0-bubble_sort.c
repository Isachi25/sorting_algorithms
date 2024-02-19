#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers
 * @array: pointer to the array to be sorted
 * @size: number of elements in the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
		if (array[j] > array[j + 1])
		{
			swap(&array[j], &array[j + 1]);

			for (k = 0; k < size; k++)
			{
				if (k > 0)
				{
					printf(", ");
				}
				printf("%d", array[k]);
			}
			printf("\n");
		}
		}
	}
}

/**
 * swap - Swaps two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
