#include "sort.h"

/**
 * swap_ints - Exchange two integers within an array
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
 * bubble_sort - Sort an array of integers in ascending order
 * @array: Array of integers to be sorted
 * @size: Size of the array
 *
 * Description: Displays the array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int bubbly = 0;

	if (array == NULL || size < 2)
		return;

	while (bubbly == 0)
	{
		bubbly = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = 0;
			}
		}
		len--;
	}
}
