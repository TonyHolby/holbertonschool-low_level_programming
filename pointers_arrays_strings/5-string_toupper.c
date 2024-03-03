#include "main.h"

/**
 * string_toupper - Entry point
 *
 * Description: a function that changes all lowercase letters of
 * a string to uppercase
 *@string: string
 *
 * Return: the value of the string
 */

char *string_toupper(char *string)
{
	int i, j, k, c, length_string = 0;

	for (c = 0; string[c] != '\0'; c++)
	{
		length_string++;
	}

	for (i = 0; i <= (length_string - 1); i++)
	{
		for (j = 'a', k = 'A'; j <= 'z'; j++, k++)
		{
			if (string[i] == j)
			{
				string[i] = k;
			}
		}
	}
	return (string);
}
