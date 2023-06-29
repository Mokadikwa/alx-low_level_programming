#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to the list_t
 *
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;

		count++;
	}
	return (count);
}
