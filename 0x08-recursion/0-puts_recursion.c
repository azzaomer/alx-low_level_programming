#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion - a function that prints a string, followed by a new line.
 *@s: string to print
 *Return: nothing
 */

void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		printf("\n");
	}
	else
	{
		printf("%c", *s);
		s++;
		_puts_recursion(s);
	}
}
