#include "main.h"

/**
 *_isdigit - checks for digit from 0 to 9
 *@n:integer data type
 *Return: returns 1 if digit and 0 otherwise
 */

int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
