#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string to check
 * @c: char to find
 * Description: Returns a pointer to the first occurrence of the character
 * Return: char
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	int flag = 0;

	i = 0;
	while (s[i] != '\n')
	{/*search for c*/
		if (s[i] == c)
		{
			flag++;
			break;
		}
		else
		{
			i++;
		}
	}
	if (flag == 0)
	{
		return (NULL);
	}
	else
	{
		return (s + i);
	}
}
