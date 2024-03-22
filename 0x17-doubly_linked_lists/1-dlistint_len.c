#include "lists.h"
/**
 * dlistint_len - Prints nuber of elments in linked list
 * @h: Is the pointer to node structure
 * Return: the amount of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
