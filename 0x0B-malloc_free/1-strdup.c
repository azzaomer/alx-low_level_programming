#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memmory.
 * @str: pointer to a string.
 * Return: pointer to astring.
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (str)
	{
		while (str[i++])
			;
		p = malloc(sizeof(char) * i + 1);
		if (p)
		{
			while (i--)
				p[i] = str[i]
			return (str);
		}
	}
	return (NULL);
}
