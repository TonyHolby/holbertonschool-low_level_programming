#include "function_pointers.h"

/**
 * int_index - Entry point
 *
 * Description: a function that searches for an integer
 * @array: array of integer
 * @size: integer
 * @cmp: function pointer to an integer
 *
 * Return: an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (i <= size && cmp(array[i]) == 0)
	{
		if (i == size)
		{
			return (-1);
		}
		i++;
	}
	return (i);
}
