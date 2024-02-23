#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * print_last_digit - Entry point
 *
 * Description: a function that computes the absolute value of an integer
 * @last_digit: variable
 *
 * Return: last_digit
 */

int print_last_digit(int last_digit)
{
	last_digit = last_digit % 10;

	if (last_digit < 0)
	{
		_abs(last_digit)
		last_digit = _abs(last_digit) % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}

	else
	{
		last_digit = last_digit % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}
}
