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
	int flag = 0;

	j = 0;
	for (i = 0; haystack[i]; i++)
	{
		while (haystack[i] == needle[j])
		{
			j++;
			i++;
			flag++;
		}
		if(!needle[j])
		{
			return (haystack + i);
		}
	}
	if (flag == 0)
	{
		return (0);
	}
	else
	{
		return (haystack +i);
	}
}
