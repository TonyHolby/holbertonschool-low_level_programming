#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * Description: a function that returns the length of a string
 * @s: string
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}

