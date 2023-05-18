#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: The pointer to the beginning of the list.
 * Return: nothing to return.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
	free(head);
}
