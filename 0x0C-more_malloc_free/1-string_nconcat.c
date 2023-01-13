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
	size = i + n + 1;
	p = malloc(sizeof(char) * size);
	if (!p)
		return (NULL);
	for (i = 0; s1[i] != '\0'; ++i)
		p[i] = s1[i];
	for (j = 0; j < n; ++j, ++i)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);
}
