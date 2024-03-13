#include "main.h"

/**
 * array_range - Entry point
 *
 * Description: a function that creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *new_array = NULL;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	new_array = malloc(size * sizeof(int));

	if (new_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_array[i] = min + i;
	}

	return (new_array);
}
