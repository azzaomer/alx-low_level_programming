#include "3-calc.h"

/**
 * op_add - add
 * @a: first op
 * @b: second op
 * Return: the result of addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction
 * @a: first op
 * @b: second op
 * Return: the result of sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two operands
 * @a: first op
 * @b: second op
 * Return: the result of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two operands
 * @a: first op
 * @b: second op
 * Return: returns the result of the division of a by b.
 */

int op_div(int a, int b)
{
	if (!b)
	{
		return ("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: first op
 * @b: second op
 * Return: returns the remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	if (!b)
	{
		return ("Error");
		exit(100);
	}
	return (a % b);
}
