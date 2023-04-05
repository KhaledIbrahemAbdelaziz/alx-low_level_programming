#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of the unique nodes.
 * @head: The pointer to the list.
 * Return: The unique nodes number or 0.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tor, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tor = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tor == hare)
		{
			tor = head;
			while (tor != hare)
			{
				nodes++;
				tor = tor->next;
				hare = hare->next;
			}
			tor = tor->next;
			while (tor != hare)
			{
				nodes++;
				tor = tor->next;
			}
			return (nodes);
		}
		tor = tor->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: The pointer to the list.
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
