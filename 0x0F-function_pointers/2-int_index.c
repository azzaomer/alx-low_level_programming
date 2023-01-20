#include <stdio.h>
#include <stdlib.h>

/**
 * int_index -  function that searches for an integer.
 * @array: the array to search
 * @size: the size of the array
 * @cmp: the function to use to compare values
 * Return: the index of the first element for
 * which the cmp function does not return 0
 * If no element matches, return -1 If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
