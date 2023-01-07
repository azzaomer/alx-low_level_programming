#include "main.h"

/**
 *_isalpha - checks for alphabetic character.
 *@c: char type letter
 * Return: zero
 */

int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
