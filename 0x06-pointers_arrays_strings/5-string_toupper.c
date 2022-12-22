#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - converts a string to uppercase
 *
 * Return: Always 0
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\n')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;

	}

	return (str);
}
