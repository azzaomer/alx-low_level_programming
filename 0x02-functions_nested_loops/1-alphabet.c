#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints alphabet using putchar function
 *
 * Retun: returns zero when success
 */

int print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar ('\n');
	return (0);
}