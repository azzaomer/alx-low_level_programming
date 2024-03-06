#include "lists.h"
#include <string.h>

/**
 * add_node - add a node
 * @head: address to a node
 * @str: a string to add
 *
 * Return: ponter to a list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	while (str[len])
		len++;
	new->len = len;
	new->str = strdup(str);
	if (!(*head))
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (*head);
}
