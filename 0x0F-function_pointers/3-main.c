#include "3-calc.h"
#include <stdio.h>

/**
 * main - checks the code
 * @argc: number of arguments
 * @argv: value of arguments
 * REturn: Always 0
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	f = get_op_func(argv[2]);

	if (!f)
	{
		return ("Error");
		exit(98);
	}
	printf("%d", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}


