#include "main.h"

/**
 *_islower - checks for lower letter character.
 *@c: char type
 * Return: Retuns 1 if lower and 0 otherwise
 */

int _islower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
