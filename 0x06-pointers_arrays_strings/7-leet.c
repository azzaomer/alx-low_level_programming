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
	char code[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char lee[] = "aeotlAEOTL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lee[j] != '\n'; j++)
		{
			if (str[i] == lee[j])
				str[i] = code[j];
		}
	}
	return (str);
}
