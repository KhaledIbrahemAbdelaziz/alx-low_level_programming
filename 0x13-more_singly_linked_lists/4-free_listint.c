#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: A pointer to the listint list.
 * Return: nothing to return.
 */

void free_listint(listint_t *head)
{
	listint_t *rmv;

	while (head)
	{
		rmv = head->next;
		free(head);
		head = rmv;
	}
}
