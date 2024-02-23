#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: a function that prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0 ; hour <= 23 ; hour++)
	{
		for (minute = 0 ; minute <= 59 ; minute++)
		{
			if (hour < 10 && minute < 10)
			{
				_putchar('0');
				_putchar('0' + hour);
				_putchar(':');
				_putchar('0');
				_putchar('0' + minute);
				_putchar('\n');
			}

			else
			{
				_putchar('0' + hour);
				_putchar(':');
				_putchar('0' + minute);
				_putchar('\n');
			}
		}
	}
}
