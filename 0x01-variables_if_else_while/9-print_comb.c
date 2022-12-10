#include<stdio.h>

/**
 * main - print all possible combination of numbers
 * Return: zero
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		putchar(' ');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
