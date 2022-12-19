#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of a number.
 * Return: zero.
 */

int main(void)
{
	unsigned long div;
	unsigned long MaxFac = 0;
	unsigned long num = 612852475143;

	if (num % 2 == 0)
	{
		MaxFac = 2;
		while (num % 2 == 0)
		{
			num = num / 2;
		}
	}
	/*At this point, num will be odd*/
	for (div =3; div <= sqrt(num); div += 2)
	{
		while (num % div == 0)
		{
			MaxFac = div;
			num = num / div;
		}
	}
	if (num > 2)
	{
		MaxFac = num;
	}
	printf("%lu\n", MaxFac);
	return (0);
}
