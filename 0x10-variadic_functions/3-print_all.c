#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: list of arguments
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int n = 0, i = 0;
	char *sep = ", ";
	char *ptr;

	va_start(arg, format);

	while (format && format[i])
		i++;
	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(arg, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(arg, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(arg, double), sep);
				break;
			case 's':
				ptr = va_arg(arg, char *);
				if (ptr == NULL)
					ptr = "(nil)";
				printf("%s%s", ptr, sep);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(arg);
}
