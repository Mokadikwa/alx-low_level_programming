#include "lists.h"

/**
 * looped_listint_len - calculate length of a looped list
 * @head: a pointer to head of listint_t list
 *
 * Return: number of node in loop
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *turtle, *rabbit;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	turtle = head->next;
	rabbit = (head->next)->next;

	while (rabbit)
	{
		if (turtle == rabbit)
		{
			turtle = head;
			while (turtle != rabbit)
			{
				nodes++;
				turtle = turtle->next;
				rabbit = rabbit->next;
			}
			turtle = turtle->next;
			while (turtle != rabbit)
			{
				nodes++;
				turtle = turtle->next;
			}
			return (nodes);
		}
		turtle = turtle->next;
		rabbit = (rabbit->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: pointer to head of the listint list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t loop_nodes, index = 0;

	loop_nodes = looped_listint_len(head);

	if (loop_nodes == 0)
	{
		for (; head != NULL; loop_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < loop_nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (loop_nodes);
}
