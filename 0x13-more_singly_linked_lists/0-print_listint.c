#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of list.
 * @h: pointer to the head of a list.
 *
 * Return: Number of elements in a list.
 */

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
