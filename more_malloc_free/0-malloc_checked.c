#include "main.h"

/**
 * malloc_checked - Entry point
 *
 * Description: a function that allocates memory using malloc
 * @b: integer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
