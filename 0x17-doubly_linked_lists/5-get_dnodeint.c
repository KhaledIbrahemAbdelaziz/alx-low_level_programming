#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * of a dlistint_t linked list.
 * @head: The pointer to the beginning of the list.
 * @index: The index to get node from.
 * Return: The node at the index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int idx = 0;

	node = head;

	if (node == NULL)
		return (NULL);
	while (node)
	{
		if (idx == index)
			return (node);
		idx++;
		node = node->next;
	}
	if (idx == 0 || idx < index)
		return (node);
	node = head;
	return (node->next);
}
