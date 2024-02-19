#include "sort.h"

/**
 * print_array - Displays elements of an integer array
 *
 * @array: The array to display
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t index;

	index = 0;
	while (array && index < size)
	{
		if (index > 0)
			printf(", ");
		printf("%d", array[index]);
		++index;
	}
	printf("\n");
}
