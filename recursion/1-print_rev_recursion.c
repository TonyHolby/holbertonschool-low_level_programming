#include "main.h"

/**
 * _print_rev_recursion - Entry point
 *
 * Description: a function that prints a string in reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
		s--;
	}
	else if (*s == '\n')
	{
		_putchar('\n');
	}
}
