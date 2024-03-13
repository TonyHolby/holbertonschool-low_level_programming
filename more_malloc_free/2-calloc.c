#include "main.h"

/**
 * _calloc - Entry point
 *
 * Description: a function that allocates memory for an array, using malloc
 * @size: unsigned integer - size of each block
 * @nmemb: unsigned integer - number of blocks
 *
 * Return: a pointer to the allocate memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *allocated_memory;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	allocated_memory = malloc(nmemb * size * sizeof(int));

	if (allocated_memory == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		allocated_memory[i] = 0;
	}

	return (allocated_memory);
}
