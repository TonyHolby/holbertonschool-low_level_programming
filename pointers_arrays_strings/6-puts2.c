#include "main.h"

/**
 * puts2 - Entry point
 *
 * Description: a function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string
 *
 */

void puts2(char *str)
{
	int c, i;
	int length = 0;

	for (c = 0; str[c] != '\0'; c++)
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
