#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - checks the code
 * @argc: number of arg
 * @argv: values of command lin args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				break;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0");
	}
	return (0);
}
