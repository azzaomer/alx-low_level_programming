#include "main.h"
#include <stdio.h>

/**
 * reverse_array - revers an array
 * @a: array of integers
 * @n: number of elmentsin the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b = 0, c;
	int d;

	c = n - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = a[b];
		a[b] = a[c];
		a[c] = d;
	}
}
