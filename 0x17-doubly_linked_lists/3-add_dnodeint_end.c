#include "lists.h"

/**
 * dlistint_t *add_dnodeint_end - adds a new node at the end
 * @head: Is the pointer to the direction of the head
 * @n: the data integer
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end, last_n;

	new_end = malloc(sizeof(dlistint_t));

	if (new_end == NULL)
		return (NULL);
	new_end->next = NULL;
	new_end->prev = NULL;
	new_end->n = n;
	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}
	last_n = *head;
	while (last_n->next != NULL)
		last_n = last_n->next;
	last_n->next = new_end;
	new_end->prev = last_n;
	return (new_end);
}
