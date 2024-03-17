#include "main.h"

/**
 * _realloc - Entry point
 *
 * Description: a function that reallocates a memory block
 * @ptr: pointer
 * @old_size: unsigned integer
 * @new_size: unsigned integer
 *
 * Return: a pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == 0)
	{
		return (malloc(new_size));
	}

	ptr = malloc(old_size * sizeof(unsigned int));

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ptr = malloc(new_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
