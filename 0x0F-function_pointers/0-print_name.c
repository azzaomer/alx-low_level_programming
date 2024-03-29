#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - a function that prints a name.
 * @name: name to print
 * @f: fnction to call to print name
 * Return:  void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
