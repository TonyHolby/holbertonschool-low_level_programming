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
	char *reallocated_memory = NULL;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size < old_size)
	{
		new_size = old_size;
		reallocated_memory = malloc(new_size);
	}
	else
	{
		reallocated_memory = malloc(new_size);
	}

	if (reallocated_memory == NULL)
	{
		return (NULL);
	}

	free(ptr);

	return (reallocated_memory);
}
