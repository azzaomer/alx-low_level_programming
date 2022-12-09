#include<stdio.h>

/*
 * main - Prints alphabets in lowercase
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 97; letter < 122; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
