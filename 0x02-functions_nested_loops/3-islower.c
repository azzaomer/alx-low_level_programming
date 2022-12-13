#include "main.h"

/**
 * _islower - Checks wheather a charecter is lower or uppercase.
 * @c: char type letter
 * Retun: retuns 1 if lower and 0 otherwise
 */

int _islower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
