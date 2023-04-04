#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: The pointer to the head of the list.
 * Return: 0 if null or the value of the head node.
 */

int pop_listint(listint_t **head)
{
	listint_t *rmv;
	int ret;

	if (*head == NULL)
		return (0);
	rmv = *head;
	ret = (*head)->n;
	*head = (*head)->next;
	free(rmv);
	return (ret);
}
