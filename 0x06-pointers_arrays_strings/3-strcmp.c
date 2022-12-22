#include "main.h"
#include<stdio.h>

/**
 * _strcmp - a function that compares two strings.v
 * @s1: first string
 * @s2: second string to compare
 * Return: -15 is s1 is less than s2 15 otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;
	int res = 0;

	while (s1[a] != '\0' && s2[b] != '\0')
	{
		if (s1[a] < s2[b])
		{
			res = -15;
			break;
		}
		else if (s1[a] > s2[b])
		{
			res = 15;
			break;
		}
		a++;
		b++;
	}
	return (res);
}



