#include "function_pointers.h"

/**
 * int_index - Entry point
 *
 * Description: a function that searches for an integer
 * @array: array of integer
 * @size: integer
 * @cmp: function pointer to an integer
 *
 * Return: the index of the array that matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
