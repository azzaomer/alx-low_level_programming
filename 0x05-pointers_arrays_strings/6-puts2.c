#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string.
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
		{
			printf("%c", str[c]);
		}
	}
	printf("\n");
}
