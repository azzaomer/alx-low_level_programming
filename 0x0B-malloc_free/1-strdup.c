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
	
	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;
	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
