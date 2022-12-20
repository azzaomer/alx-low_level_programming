#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: points to a string
 * Return: void.
 */

void puts_half(char *str)
{
	int c = 0, n, i;

	while (str[c] != '\n')
	{
		c++;
	}
	if ((c + 1) % 2 == 0)
	{
		n = (c / 2);
	}
	else
	{
		n = (c - 1) / 2;
	}
	for (i = n; str[i] != '\n'; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
