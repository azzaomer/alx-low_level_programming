#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copy string into another string
 * @dest: destenation string
 * @src: source string
 * @n: number of chars to copy
 * Return: destenation string after copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
