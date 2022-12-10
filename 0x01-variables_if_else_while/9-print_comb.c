#include<stdio.h>

/**
 * main - print all possible combination of numbers
 * Return: zero
 */

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
