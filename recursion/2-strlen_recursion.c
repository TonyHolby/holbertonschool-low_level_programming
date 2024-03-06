#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * Description: a function that returns the length of a string
 * @s: string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_strlen_recursion(s);
	}

	return (*s);
}

