#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * Description: a function that prints a string, followed by a new line
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(0 + *s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}

