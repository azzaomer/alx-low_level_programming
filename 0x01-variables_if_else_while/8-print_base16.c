#include<stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: zero
 */

int main(void)
{
	int num;
	char letter;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
