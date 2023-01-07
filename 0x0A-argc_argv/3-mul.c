#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 * @argc: number of comand arguments
 * @argv: array of command arguments values
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
