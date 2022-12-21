#include "main.h"
#include <stdio.h>

/**
 * *_strncat - function that concatenates two strings.
 * @dest: destenation string
 * @src: source string
 * @n: number of bytes to concatrnate
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
