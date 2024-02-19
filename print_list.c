#include "sort.h"

/**
 * print_list - Displays elements of a linked list
 *
 * @list: The list to display
 */
void print_list(const listint_t *list)
{
	int index;

	index = 0;
	while (list)
	{
		if (index > 0)
			printf(", ");
		printf("%d", list->n);
		++index;
		list = list->next;
	}
	printf("\n");
}
