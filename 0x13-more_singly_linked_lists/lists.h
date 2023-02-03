#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif
#ifndef _LISTS_H
#define _LISTS_H


/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next nod
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
/* 0x12. C - More singly linked lists */
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif
