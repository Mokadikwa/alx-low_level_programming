#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: value to be stored in new node
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *cur;
	unsigned int i;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*h && idx == 0)
		return (*h = new_node);

	if ((!*h || idx == 0))
	{
		free(new_node);
		return (NULL);
	}
	cur = *h;
	for (i = 0; cur && i < idx - 1; cur = cur->next, i++)
		;

	if (!cur)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = cur->next;
	new_node->prev = cur;

	if (cur->next)
		cur->next->prev = new_node;

	return (cur->next = new_node);
}
