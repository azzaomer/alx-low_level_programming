#include "main.h"
#include <stdio.h>

/**
 * *leet - function that encodes a string into 1337.
 *@str: points to a string
 *Return: encoded string
 */

char *leet(char *str)
{
	int i, j;
	char  lee[] = {'A', '4', 'a', '4', 'E', '3', 'e', '3',
		'O', '0', 'o', '0', 'T', '7', 't', '7', 'L', '1', 'l','1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (str[i] == lee[j])
				str[i] = lee[j + 1];
		}
	}
	return (str);
}
