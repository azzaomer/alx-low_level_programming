#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: returns 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		i++;
	}
	_putchar('\n');
}
