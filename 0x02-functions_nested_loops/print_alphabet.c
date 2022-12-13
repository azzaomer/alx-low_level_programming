#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabet using putchar function
 *
 * Retun: returns zero when success
 */

int print_alphabet (void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		_putchar('\n');
		i++;
	}
	return (0);
}
