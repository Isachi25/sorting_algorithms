#include "sort.h"

/**
 * swap - swaps two integers
 * @a: first int
 * @b: second int
 * Return: No return value
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - divides the list of array into two parts
 * @array: pointer to the list of int
 * @low: first half
 * @high: last half
 * @size: size of the array
 * Return: the partition index
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}


/**
 * quickSort - A helper function that uses recursion that to partion the array
 * @array: ponter to a list of int
 * @low: lowest index
 * @high: highest index
 * @size: size of the array
 * Return: No return value
 */

void quickSort(int *array, int low, int high, size_t size)
{
	int index;

	if (low < high)
	{
		index = partition(array, low, high, size);
		quickSort(array, low, index - 1, size);
		quickSort(array, index + 1, high, size);
	}
}


/**
 * quick_sort - sorts an array of integers using the quick sort algorithm
 * @array: array of int to be sorted
 * @size: size of the array
 * Return: No return value
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quickSort(array, 0, size - 1, size);
}
