#include "main.h"

/**
 * _strdup - Entry point
 *
 * Description: a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: cstring
 *
 * Return: NULL if str = NULL, else a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size_of_ar = 12;
	char *ar = malloc(size_of_ar * sizeof(char));

	for (i = 0; i < size_of_ar; i++)
	{
		ar[i] = str[i];
	}

	if (*str == '\0')
	{
		return ('\0');
	}

	return (ar);
}
