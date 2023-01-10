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
	char *s;
	int i = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = malloc(sizeof(char)*i + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		s[i] = str[i];
		i++;

	}
	s[i] = str[i];
	return (str);
}
