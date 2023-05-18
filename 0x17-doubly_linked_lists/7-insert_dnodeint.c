#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: The pointer to the beginning of the list.
 * @idx: The address to add the node.
 * @n: The value of the node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp = *h;
	unsigned int index = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*h == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		*h = node;
		return (node);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (index < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		index++;
	}
	if (temp->next == NULL)
	{
		temp->next = node;
		node->prev = temp;
		node->next = NULL;
		return (node);
	}
	node->next = temp->next;
	temp->next = node;
	node->prev = temp;
	node->next->prev = node;
	return (node);
}
