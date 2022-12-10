#include<stdio.h>

/**
 * main - prints alphabt in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		putchar(letter);
	}
	putchar('\n');
}
