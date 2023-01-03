#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area.
 *@dest: destenation array
 *@src: source array
 *@n: number of elment
 *Return: return char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] =  src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
