#include "main.h"

/**
 *print_alphabet - prints letter.
 *
 * Return: Always zero
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
