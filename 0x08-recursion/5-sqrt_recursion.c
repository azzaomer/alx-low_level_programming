#include "main.h"
#include <stdio.h>

/**
 * _sqrt - return sqr root of a number
 * @n: int
 * @m: int
 * Return: squer root of number
 */

int _sqrt(int n, int m)
{
	if (n > m / 2)
	{
		return (-1);
	}
	else if (n * n == m)
	{
		return (n);
	}
	return (_sqrt(n + 1, m));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt(0, n));
}
