#include<stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: zero
 */
int main(void)
{
	char letter;

	for (letter = 122; letter >= 97; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
