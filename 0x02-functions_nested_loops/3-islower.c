#include "main.h"

/**
 * _islower - Return 1 if letter is lower 0 otherwise
 *
 * @c: char type letter
 * Description: Check letter if its lowercase
 * Retun: retuns 1 if lower and 0 otherwise
 */

int _islower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
