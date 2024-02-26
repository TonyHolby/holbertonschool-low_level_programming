#include <stdlib.h>

/**
 * _isupper - Entry point
 *
 * Description: a function that checks for uppercase character
 *@c: variable
 *
 * Return: 1 if c is an uppercase and 0 otherwise
 */

int _isupper(int c)
{
	char letter;

	for (letter = 'A' ; letter <= 'Z' ; letter++)
	{
		if (c == letter)
			return (1);

		else
			continue;
	}

	return (0);
}
