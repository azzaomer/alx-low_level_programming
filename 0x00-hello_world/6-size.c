#include<stdio.h>

/**
 * main - printsprints the size of different data types using sizeof
 * Discription: program that prints out a string followed by a new line
 * Return: int 0 when done
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return(0);
}
