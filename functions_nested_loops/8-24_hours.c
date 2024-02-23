#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * jack_bauer - Entry point
 *
 * Description: a function that prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0 ; hour <= 23 ; hour++)
	{
		_putchar(hour);
		_putchar(':');

		for (minute = 0 ; minute <= 59 ; minute++)
			_putchar(minute);
	}

	_putchar('\n');
}
