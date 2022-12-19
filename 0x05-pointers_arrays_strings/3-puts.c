#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: points to a string
 * Return: returns zero
 */

void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		printf("%c", str[c]);
		c++;
	}
	printf("\n");
}
