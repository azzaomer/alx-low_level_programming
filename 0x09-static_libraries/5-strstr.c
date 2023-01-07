#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: the string
 * @needle: substring to search for
 * Return: a pointer to the beginning of the located substring,
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	for (i = 0; haystack[i]; i++)
	{
		while ((haystack[i] == needle[j]) && needle[j])
		{
			j++;
			i++;
		}
		if (!needle[j])
		{
			return (haystack + i);
		}
	}
	return (0);
}
