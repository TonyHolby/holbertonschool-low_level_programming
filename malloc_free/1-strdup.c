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
	unsigned int i, j, length = 0;
	char *duplicata = NULL;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	if (length == 0)
	{
		return (NULL);
	}

	duplicata = malloc(length * sizeof(char));

	if (duplicata == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < (length - 1); j++)
	{
		duplicata[j] = str[j];
	}

	return (duplicata);
}
