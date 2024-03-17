#include "main.h"

/**
 * _calloc - Entry point
 *
 * Description: a function that allocates memory for an array, using malloc
 * @old_size: unsigned int
 * @new_size: unsigned integer
 *
 * Return: a pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	ptr = malloc(old_size * sizeof(unsigned int));

	free(ptr);

	if (old_size == 0 || new_size == 0)
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
