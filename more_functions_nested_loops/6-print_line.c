#include "main.h"
#include <stdlib.h>

/**
 * print_line - Entry point
 *
 * Description: a function that draws a straight line in the terminal
 *@n: the number of times the character _ should be printed
 *
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i <= (n - 1) ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
