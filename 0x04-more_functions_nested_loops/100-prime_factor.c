#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of a number.
 * Return: zero.
 */

int main(void)
{
	unsigned long div = 2;
	unsigned long MaxFac = 0;
	unsigned long num = 612852475143;

	while (num > div)
	{
		if (div > MaxFac)
		{
			MaxFac = div;
			num = num / div;
		}
		div++;
	}
	printf("%lu\n", MaxFac);
	return (0);
}
