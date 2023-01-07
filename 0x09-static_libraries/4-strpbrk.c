#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  function that searches a string for any of a set of bytes.
 * @s: string to search in
 * @accept: string to search for
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return (0);
}
