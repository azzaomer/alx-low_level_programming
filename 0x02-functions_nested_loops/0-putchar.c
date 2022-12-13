#include<stdio.h>

/**
 * main - prints '_putchar'
 *
 * Return: returns 0 (success)
 */


int main(void)
{
	char putchar [] = '_putchar';
	int i = 0;

	while (putchar[i] != '\0')
	{
		putchar(putchar[i]);
		i++;
	}
	putchar('\n');
	return (0);
}


