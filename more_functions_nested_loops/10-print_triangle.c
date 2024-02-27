#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: a function that prints a triangle, followed by a new line
 *@size: variable
 */

void print_triangle(int size)
{
	int height, width, diese;

	if (size > 0)
	{
		for (height = 0 ; height < size ; height++)
		{
			for (width = 2 ; width <= (size - height) ; width++)
			{
				_putchar(' ');
			}
			for (diese = 0 ; diese <= (size - (size - height)) ; diese++)
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
