#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min number
 * @max: max number
 * Return: int
 */

int *array_range(int min, int max)
{
	int *p;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(size * sizeof(int));
	if (!p)
		return (NULL);
	for (i = 0; i < size; i++, min++)
		p[i] = min;
	return (p);
}

