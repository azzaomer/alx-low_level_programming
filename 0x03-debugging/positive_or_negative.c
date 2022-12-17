#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_nigative - chechk randoly number if its negative or positive
 * @n: integer data type
 * Return: zero (success)
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
