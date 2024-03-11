#include "main.h"

/**
 * create_array - Entry point
 *
 * Description: a function that creates an array of chars, and
 * initializes it with a specific char
 * @size: unsigned int
 * @c: character
 *
 * Return: NULL if size = 0 or if it fails, else a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar = NULL;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
