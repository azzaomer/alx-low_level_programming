#include "main.h"

/**
 *_isupper - checks for upper case letter
 *@c: char type
 * Return: returns 1 if upper and 0 otherwise
 */

int _isupper(char c)
{
	if (c >= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
