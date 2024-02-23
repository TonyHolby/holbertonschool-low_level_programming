#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_sign - Entry point
 *
 * Description: a function that prints the sign of a number
 * @n: variable
 *
 * Return: 1 if n is greater than zero
 * 0 if n is zero
 * -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}