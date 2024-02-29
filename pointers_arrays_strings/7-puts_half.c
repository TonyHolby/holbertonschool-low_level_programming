#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description: a function that prints the second half
 * of a string followed by a new line
 * @str: string
 *
 */

void puts_half(char *str)
{
	int c = 0;
	int i = 0;
	int length = 0;

	for (c = 0; str[c] != '\0'; c++)
	{
		length++;
	}

	if (((length - 1) % 2) == 0)
	{
		for (i = ((length - 1) / 2); i <= (length - 1); i++)
		{
			_putchar(str[i]);
		}
	}

	else
	{
		for (i = (((length - 1) / 2) + 1); i <= (length - 1); i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
