#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: The pointer to the listint list.
 * Return: nothing to return.
 */

void free_listint2(listint_t **head)
{
	listint_t *rmv;

	if (head == NULL)
		return;
	while (*head)
	{
		rmv = (*head)->next;
		free(*head);
		*head = rmv;
	}
	head = NULL;
}
