#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: a function that draws a diagonal line on the terminal
 *@n: the number of times the character \ should be printed
 *
 */

void print_diagonal(int n)
{
	int height, width;

	if (n > 0)
	{
		for (height = 1 ; height <= n ; height++)
		{
			for (width = 0 ; width <= height ; width++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
