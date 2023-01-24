#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  a function that prints strings, followed by a new line.
 * @seperator: seperator
 * @n: number of arguments
 * Return:void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *p;
	unsigned int i;
	va_list arg;

	if (separator == NULL || *separator == 0)
	{
		sep = "";
	}
	else
		sep = (char *) separator;
	va_start(arg, n);

	if (n > 0)
		printf("%s", va_arg(arg, char *));
	for (i = 1; i < n; i++)
	{
		p = va_arg(arg, char *);
		if (p == NULL)
			p = "(nil)";
		printf("%s%s", sep, p);
	}
	printf("\n");
	va_end(arg);
}
