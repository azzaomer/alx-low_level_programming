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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	p = malloc(1 + (sizeof(char) * j) + (sizeof(char) * j));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; i++, j++)
	{
		p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}

