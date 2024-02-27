#include "main.h"
#include <stdlib.h>

/**
 * more_numbers - Entry point
 *
 * Description: a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 *
 */

void more_numbers(void)
{
	int num, i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if (num > 9)
			{
				_putchar('0' + (num / 10));
			}
			_putchar('0' + (num % 10));
		}
		_putchar('\n');
	}
}
