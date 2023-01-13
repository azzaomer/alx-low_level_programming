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
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(size) * nmemb);
	if  (p == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
		p[a] = 0;
	return (p);
}
