#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in revers
 * @s: point to astirng
 * Return: void
 */

void print_rev(char *s)
{
	int c;
	int len;

	len = strlen(s);
	for(c = len - 1; c >= 0; c--)
	{
		printf("%c", s[c]);
	}
	printf("\n");
}
