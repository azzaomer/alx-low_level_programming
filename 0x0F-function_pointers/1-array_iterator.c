#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array.
 * @array: array
 * @size: size of array
 * @action: function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
		while (size--)
		{
			action(*array++);
		}
}
