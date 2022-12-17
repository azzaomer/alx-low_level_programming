#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *@n: integer datatype
 * Return: returns zero
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
