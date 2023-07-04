#include "lists.h"

/**
 * create_new_node - creates new node
 * @n: integer
 *
 * Return: result
 */
listint_t *create_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_node_after - insert node
 * @current: pointer
 * @new_node: pointer
 */

void insert_node_after(listint_t *current, listint_t *new_node)
{
	new_node->next = current->next;
	current->next = new_node;
}

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: pointer to pointer of linked list
 * @idx: index of the list where the new node should be added
 * @n:
 *
 * Return: the address of the new node, NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node = create_new_node(n);

		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	count = 0;

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	new_node = create_new_node(n);

	if (new_node == NULL)
	{
		return (NULL);
	}
	insert_node_after(current, new_node);
	return (new_node);
}
