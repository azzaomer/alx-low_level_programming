#include <stdlib.h>
#include <stdio.h>

/**
 * main - checks the code
 * @argc: number of command line arg
 * @argv: array of command line arg
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
