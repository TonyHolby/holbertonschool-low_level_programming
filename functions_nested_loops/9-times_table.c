#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: a function that prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int line = 0;
	int col = 0;

	for (line = 0 ; line <= 9 ; line++)
	{
		for (col = 0 ; col <= 8 ; col++)
		{
			if ((line * col) <= 10)
			{
				_putchar('0' + (line * col));
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			else
			{
				_putchar('0' + ((line * col) / 10));
				_putchar('0' + ((line * col) % 10));
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('0' + ((line * (col + 1)) / 10));
		_putchar('0' + ((line * (col + 1)) % 10));
		_putchar('\n');
	}
}
