#include<stdio.h>

/**
 * main - prints all numbers in base 10
 * Return: zero
 */

int main(void)
{
	char num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
