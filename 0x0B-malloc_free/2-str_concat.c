#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string to concatnate
 * @s2: second string
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		++i;
	while (s2[i])
		++j;
	size = i + j + 1;
	p = (char *) malloc(size * sizeof(char));
	if (!p)
		return (NULL);
	if (s1)
	{
		for (i = 0; s1[i] != '\0'; ++i)
		{
			p[i] = s1[i];
		}
	}
	if (s2)
	{
		for (j = 0; s2[j] != '\0'; ++j)
		{
			p[i + j] = s2[j];
		}
	}
	p[i + j] = '\0';
	return (p);
}

