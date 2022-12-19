#include "main.h"
#include <stdio.h>

/**
 * _strlen - print yhe lenght of a string
 *@s: pinter to char variable
 *Return: length of string
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
