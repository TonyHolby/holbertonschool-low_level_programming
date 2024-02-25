#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: a function that computes the absolute value of an integer
 * @number: variable
 *
 * Return: last_digit
 */

int print_last_digit(int number)
{
	int last_digit = number % 10;

	if (number < 0)
	{
		last_digit = -last_digit;
		_putchar('0' + last_digit);
		return (last_digit);
	}

	else
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}
}
