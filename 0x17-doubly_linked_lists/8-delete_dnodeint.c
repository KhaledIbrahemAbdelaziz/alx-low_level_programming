#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list.
 * @head: The pointer to the beginning of the list.
 * @index: The address to remove the node.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *temp;
	unsigned int idx = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		node = (*head)->next;
		node->prev = NULL;
		return (1);
	}
	node = *head;
	while (node)
	{
		if(idx == index)
		{
			temp = node->next;
			temp->prev = node->prev->prev;
			node = temp->prev;
			node->next = temp->next->next;
			return (1);
		}
		node = node->next;
		idx++;
	}
	if (idx < index)
		return (-1);
	if (node->next == NULL)
		return (1);
	return (-1);
}
