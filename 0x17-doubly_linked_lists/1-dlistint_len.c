#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to linked list to print
 * Return: number of elements in a linkedd list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
