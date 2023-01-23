#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: int
 * Return: the sum of untegars
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;
	/**
	 * we call va_start with our va_list variable args, as well as the last
	* parameter variable preceeding the beginning of the list of arguments
	 * variable length
	 */
	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum = sum + x;
	}
	/**
	* va_end ends our access to the list of arguments, again using va_list
	* variable args
	*/
	va_end(args);
	return (sum);
}


