#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of a nimber.
 *
 * Returns: zero.
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
			div ++;
	}
	
		printf("%lu", MaxFac);
		return (0);
}	

