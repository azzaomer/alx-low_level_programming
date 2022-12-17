#include "main.h"

/**
 * print_diagonal -  draws a diagonal line
 * @n: integer argument
 * Return: return 0
 */

void print_diagonal(int n)
{
	int i, j;
	

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = n - i; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

