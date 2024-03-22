#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: Is the pointer to the direction of the head
 * @n: the data integer
 * Return: The added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	
	if(tmp == NULL)
		return (NULL);
	
	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = *head;
	if(*head != NULL)
		(*head)->prev = tmp;

	*head = tmp;
	return (tmp);
}
