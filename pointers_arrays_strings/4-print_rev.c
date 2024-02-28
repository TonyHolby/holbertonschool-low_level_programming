#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: a function that prints a string, in reverse,
 * followed by a new line
 * @s: string
 *
 * Return: the length of the string
 */

void print_rev(char *s)
{
	int letter = '\0';

	for (letter = '\0'; s[letter] <= 0;  letter++)
	{
		_putchar(s[letter]);
	}
	_putchar('\n');
}
