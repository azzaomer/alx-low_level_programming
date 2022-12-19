#include <stdio.h>

/**
 * swap_int - swap two integers values
 * @a: pointer points to an integr data type
 * @b: pointer points to an integer data
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
