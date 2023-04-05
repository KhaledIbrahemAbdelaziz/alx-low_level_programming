#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t free_listint_safe(listint_t **h);

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
 * free_listint_safe - frees a listint_t list.
 * @h: The pointer to the list.
 * Return: the size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *rmv;
	size_t nodes, index;

	nodes = looped_listint_len(*h);
	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			rmv = (*h)->next;
			free(*h);
			*h = rmv;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			rmv = (*h)->next;
			free(*h);
			*h = rmv;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
