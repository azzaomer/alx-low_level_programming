#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * main - checks the code
 *
 * Return: always 0
 */

int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	return (0);
}
