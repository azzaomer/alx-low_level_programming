#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: points to a string
 * Return: void.
 */

void puts_half(char *str)
{
	int c = 0, n;

	while (*(str + c))
	{
		c++;
	}
	n = c / 2;
	if (c  % 2)
	{
		n += 1;
	}
	while (n < c)
	{
		printf("%c", *(str + j));
		n++;
	}
	printf("\n");
}
