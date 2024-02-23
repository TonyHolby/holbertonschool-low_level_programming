#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: a function that prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int height = 0;
	int length = 0;

	for (height = 0 ; height <= 9 ; height++)
	{
		for (length = 0 ; length <= 9 ; length++)
		{
			_putchar('0' + (height * length));
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
