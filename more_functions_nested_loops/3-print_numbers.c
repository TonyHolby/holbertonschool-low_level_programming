#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Entry point
 *
 * Description: a function that prints the numbers, from 0 to 9,
 * followed by a new line
 *
 */

void print_numbers(void)
{
	int num;

	for (num = 0 ; num <= 9 ; num++)
	{
		_putchar('0' + num);
	}

	_putchar('\n');
}
