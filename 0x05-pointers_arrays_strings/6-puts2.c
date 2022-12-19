#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string.
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int c = 0, i;

	while (str[c] != '\0')
	{
		c++;
	}
	for (i = 0; i <= c; i++)
	{
		if (str[i] % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
