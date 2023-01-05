#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: sring
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int c;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		c = _strlen_recursion(s + 1);
	}
	return (c + 1);
}
