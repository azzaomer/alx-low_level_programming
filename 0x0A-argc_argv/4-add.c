#include <stdlib.h>
#include <stdio.h>

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
			if (atoi(argv[i]) < 0)
			{
				printf("Error");
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
	return(0);
}
