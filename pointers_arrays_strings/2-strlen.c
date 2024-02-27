#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: a function that returns the length of a string
 * @s: string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;
	int letter;

	for (letter = 0; s[letter] != '\0'; letter++)
	{
		length++;
	}

	return (length);
}
