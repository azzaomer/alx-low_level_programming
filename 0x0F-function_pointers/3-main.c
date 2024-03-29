#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", f(a, b));
	return (0);
}


