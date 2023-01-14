#include <stdio.h>
#include <stdlib.h>

/**
 * copyfunc -  helper function that copies over a string
 * @ptr: is a pointer to the memory previously allocate
 * @new_ptr: the new pointer
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * Return: void.
 */

void copyfunc(char *ptr, char *new_ptr, int old_size)
{
	if (old_size)
	{
		*new_ptr = *ptr;
		copyfunc(ptr + 1, new_ptr + 1, old_size - 1);
	}
}

/**
 * _realloc -  a function that reallocates a memory block using malloc and
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: void.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size || ptr != NULL)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		copyfunc(ptr, new_ptr, old_size);
	}
	free(ptr);
	return (new_ptr);
}
