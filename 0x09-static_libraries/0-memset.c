#include "main.h"
#include <stdio.h>

/**
 * _memset -  function that fills memory with a constant byte.
 * @s: array of elments
 * @b: buffer value
 * @n: number of elments
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}


