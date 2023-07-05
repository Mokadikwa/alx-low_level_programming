#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: a pointer to the head of the lintint_t list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *temp = NULL;

	if (*h == NULL)
		return (0);

	while (current != NULL)
	{
		size++;
		if (current->next >= current)
		{
			temp = current;
			break;
		}
		temp = current->next;
		free(current);
		current = temp;
	}
	*h = NULL;
	return (size);
}
