#include "search_algos.h"

/**
 * exponential_search - exponential search
 * @array: integer array
 * @size: array size
 * @value: value to search
 *
 * Return: the index found or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, n_size = 0;
	int x;

	if (!array || !size)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i <<= 1;
	}
	n_size = (i >= size ? size : i + 1) - (i >> 1);
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i << 1 >= size ? size - 1 : i << 1);
	x = binary_search(array + i, n_size, value);
	return (x == -1 ? x : x + (int)i);
}

/**
 * binary_search - binary search
 * @array: integer array
 * @size: array size
 * @value: value to search for
 *
 * Return: the index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *a = array;

	if (!array)
		return (-1);

	while (size)
	{
		for (i = 0, printf("Searching in array: "); i < size; i++)
			printf("%d%s", a[i], i + 1 == size ? "\n" : ", ");

		i = (size - 1) / 2;
		if (a[i] == value)
			return ((a - array) + i);
		else if (a[i] > value)
			size = i;
		else
		{
			a += (i + 1);
			size -= (i + 1);
		}
	}
	return (-1);
}
