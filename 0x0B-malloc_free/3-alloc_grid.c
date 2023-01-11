#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create a 2-dimensional array with each element set to 0
 * @width: number of columns
 * @height: number of rows
 * Return: NULL if memory allocation fails or any argument is less than 1,
 * otherwise return a pointer to the first element of the array.
 */

int **alloc_grid(int width, int height)
{
	int **mat, row, column;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	mat = (int **) malloc(sizeof(int *) * height);
	if (!mat)
	{
		return (NULL);
	}
	for (row = 0; row < height; ++row)
	{
		mat[row] = (int *) malloc(sizeof(int) * width);
		if (!mat[row])
		{
			while (--row > -1)
				free(mat[row]);
			free(mat);
			return (NULL);
		}
		for (column = 0; column < width; ++column)
			mat[row][column] = 0;
	}
	return (mat);
}
