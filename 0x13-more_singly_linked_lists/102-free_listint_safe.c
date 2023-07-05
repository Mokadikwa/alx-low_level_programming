#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: a pointer to the head of the lintint_t list
 *
 * Return: number of elements in freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		if (*h > (*h)->next)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
