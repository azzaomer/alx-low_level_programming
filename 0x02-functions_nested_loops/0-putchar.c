#include<stdio.h>
#include "main.h"

/**
 * main - prints '_putchar'
 *
 * Return: returns 0 (success)
 */


int main(void)
{
	char pchar [] = "_putchar";
	int i = 0;

	while (pchar[i] != '\0')
	{
		_putchar(pchar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}


