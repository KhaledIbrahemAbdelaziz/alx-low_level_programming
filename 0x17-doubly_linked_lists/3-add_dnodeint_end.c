#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: The pointer to the beginning of the list.
 * @n: The value.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *last;
	int num = n;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = num;
	node->next = NULL;
	if(*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = node;
	node->prev = last;
	return (node);
}
