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
	int d_hour = 0;
	int u_hour = 0;
	int d_min = 0;
	int u_min = 0;

	for (d_hour = 0 ; d_hour <= 2 ; d_hour++)
	{
		for (u_hour = 0 ; u_hour <= 9 ; u_hour++)
		{
			for (d_min = 0 ; d_min <= 5 ; d_min++)
			{
				for (u_min = 0 ; u_min <= 9 ; u_min++)
				{
					if (d_hour == 2 && u_hour == 4)
						return;

					else
					{
						_putchar('0' + d_hour);
						_putchar('0' + u_hour);
						_putchar(':');
						_putchar('0' + d_min);
						_putchar('0' + u_min);
						_putchar('\n');
					}
				}
			}
		}
	}
}
