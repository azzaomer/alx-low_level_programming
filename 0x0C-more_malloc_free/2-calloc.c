#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  function that allocates memory for an array, using malloc.
 * @nmemb: number of elments
 * @size: size of ech elment
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	p = malloc(sizeof(size) * nmemb);
	return (p);
}
