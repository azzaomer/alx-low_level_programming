#include <stdio.h>
#include "lists.h"

size_t read_element(const list_t *);

/**
 * list_len - find the len of a list
 * @h: pointer to a list_t
 * Return: length of list
 */

size_t list_len(const list_t *h)
{
	if (!h)
		return (0);
	if (!h->next)
		return (1);
	return (1 + read_element(h));
}

/**
 * step_through - step through the list.
 * @h: a pointer to a list_t
 *
 * Return: a count for every step through the list.
 */

size_t read_element(const list_t *h)
{
	if (!h->next)
		return (0);
	return (1 + read_element(h->next));
}
