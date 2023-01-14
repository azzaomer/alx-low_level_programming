#include <stdio.h>
#include <stdlib.h>

/**
 * _compare - function to compare last and first char
 * @f: first part of the string
 * @s: second part of the string
 * Return: 0 if not and 1 if equal
 */

int _compare(char *f, char *s)
{
	if (*f == '\0')
		return (1);
	if (*f == *s)
		return (_compare(++f, --s));
	else
		return (0);
}

/**
 * _revers - revers the string
 * @s: pointer to check
 * Return: the pointer in reverse
 */

char *_revers(char *s)
{
	if (*s != '\0')
		return (_revers(++s));
	else
		return (--s);
}

/**
 * is_palindrome - the given function reeturning extra functions
 * @s: string to check
 * Return:  1 if is palindrome 0 if is not
 */

int is_palindrome(char *s)
{
	char *p;

	p = _revers(s);
	return (_compare(s, p));
}
