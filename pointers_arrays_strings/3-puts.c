#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 *
 * Description: a function that prints a string,
 * followed by a new line, to stdout
 * @str: string
 *
 */

void _puts(char *str)
{
	int letter;

	for (letter = 0; str[letter] != '\0';  letter++)
	{
		_putchar(str[letter]);
	}
	_putchar('\n');
}
