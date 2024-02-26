#include "main.h"
#include <stdlib.h>

/**
 * print_most_numbers - Entry point
 *
 * Description: a function that prints the numbers, from 0 to 9,
 * followed by a new line
 *
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0 ; num <= 9 ; num++)
	{
		if (num == 2 || num == 4)
			continue;
		else
			_putchar('0' + num);
	}
	_putchar('\n');
}
