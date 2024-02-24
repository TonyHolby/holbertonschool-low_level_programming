#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - Entry point
 *
 * Description: a function that prints all natural numbers from n to 98
 * followed by a new line
 * @n: integer
 *
 * Return: 98
 */

void print_to_98(int n)
{
	if (n < 98 || n > 98)
	{
		while (n < 98 || n > 98)
		{
			if (n != 98)
			{
				_putchar('0' + n);
				_putchar(',');
				_putchar(' ');
				n++;
			}
			else
			{
				_putchar('0' + 98);
				_putchar('\n');
			}
		}
	}

	else
	{
		_putchar('0' + 98);
		_putchar('\n');
	}
}
