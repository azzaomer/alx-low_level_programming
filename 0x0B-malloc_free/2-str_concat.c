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
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[i])
		i++;
	while (s2[i])
		j++;
	p = malloc(1 + (sizeof(char) * i) + (sizeof(char) * j));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = s2[j];
	return (p);
}

