#include<stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: zero
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%d", digit);
	}
	return (0);
}
