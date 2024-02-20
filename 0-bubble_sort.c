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
	size_t i, j;

	if (array == NULL || size <= 1)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		int swapped = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
			}
		}
		if (swapped == 0)
		{
			break;
		}
		print_array(array, size);
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
