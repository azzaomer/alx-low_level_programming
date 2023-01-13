#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: int
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0;
	unsigned int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		++i;
	while (s2[j])
		++j;
	if (n >= j)
		n = j;
	size = i + j + 1;
	p = malloc(sizeof(char) * size);
	if (!p)
		return (NULL);
	if (s1)
	{
	for (i = 0; s1[i] != '\0'; ++i)
		p[i] = s1[i];
	}
	if (s2)
	{
	for (j = 0; j <= n; ++j)
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}
