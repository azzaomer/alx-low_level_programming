#include<stdio.h>
#include<unistd.h>

/**
 * main - print string whithout using printf or put
 *Description: prints string folloed by an new line
 * Return: returns one
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);

}

