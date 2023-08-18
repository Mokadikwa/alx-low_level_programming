#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: pointer to head of list
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; current && i < index; i++)
		current = current->next;
	if (!current)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
