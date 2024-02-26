#include "main.h"

/**
 * print_square - Entry point
 *
 * Description: a function that prints a square, followed by a new line
 *@size: variable
 */

void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 0 ; height <= (size - 1) ; height++)
		{
			for (width = 0 ; width <= (size - 1) ; width++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
