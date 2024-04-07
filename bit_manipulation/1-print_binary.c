#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: unsigned long integer
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (!(n & mask) && mask != 0)
	{
		mask >>= 1;
	}

	if (mask == 0)
	{
		_putchar('0');
		return;
	}
	for (; mask != 0; mask >>= 1)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
