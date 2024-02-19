#include "sort.h"

/**
 * swap_ints - Exchange the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - Partitions a subset of an array
 * @array: The array of integers
 * @size: The size of the array
 * @left: The starting index of the subset
 * @right: The ending index of the subset
 *
 * Returns: The final position of the pivot element
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}

	return above;
}

/**
 * lomuto_sort - Sorts a subset of an array using the Lomuto scheme
 * @array: The array of integers
 * @size: The size of the array
 * @left: The starting index of the subset
 * @right: The ending index of the subset
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 * @array: The array of integers
 * @size: The size of the array
 *
 * Details: Uses the Lomuto partition scheme and prints the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
