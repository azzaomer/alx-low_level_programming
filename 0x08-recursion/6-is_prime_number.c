#include <stdio.h>
#include <stdlib.h>

/**
 * prim - show if number is prime
 *@n: int to check
 *@i: int to check
 *Return: 0if it is not prime
 */

int prim(int n, int i)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (i >= n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prim(n, i + 1));
	return (1);
}

/**
 * is_prime_number - function return 1 if is prime number
 * @n: int to check
 * Return: 0 if is not prime number
 */

int is_prime_number(int n)
{
	return (prim(n, 2));
}
