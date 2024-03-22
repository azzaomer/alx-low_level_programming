#include "lists.h"
/**
 * free_dlistint - Free the memory
 * @head: Pointer to head
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *m;

	while (head != NULL)
	{
		m = head->next;
		free(head);
		head = m;
	}
}
