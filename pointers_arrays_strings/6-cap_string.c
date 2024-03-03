#include "main.h"
#include "5-string_toupper.c"

/**
 * cap_string - Entry point
 *
 * Description: a function that capitalizes all words of a string
 * @the_string: string
 *
 * Return: the value of the string
 */

char *cap_string(char *the_string)
{
	int i, c, length_the_string = 0;

	for (c = 0; the_string[c] != '\0'; c++)
	{
		length_the_string++;
	}

	for (i = 0; i < (length_the_string - 1); i++)
	{
		if ((the_string[i - 1]) == ' ')
		{
			the_string[i] == string_toupper[i];
		}
	}

	return (the_string);
}
