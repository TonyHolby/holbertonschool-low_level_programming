#include "main.h"

/**
 * _realloc - Entry point
 *
 * Description: a function that reallocates a memory block
 * @old_size: unsigned integer
 * @new_size: unsigned integer
 *
 * Return: a pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == 0)
	{
		return (NULL);
	}

	ptr = malloc(old_size * sizeof(unsigned int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	free(ptr);

	if (new_size == 0)
	{
		return (NULL);
	}

	ptr = malloc(new_size * sizeof(unsigned int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
