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

	while (str[c] != '\0')
	{
		c++;
	}
	if ((c + 1) % 2 != '0')
	{
		n = (c -1) / 2;
	}
	else
	{
		n = (c / 2);
	}
	n++;
	for (c = n; str[c] != '\0'; c++)
	{
		printf("%c", str[c]);
	}
	printf("\n");
}
