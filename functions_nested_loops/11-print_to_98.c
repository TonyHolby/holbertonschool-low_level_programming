#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * Description: a function that prints all natural numbers from n to 98
 * followed by a new line
 * @n: integer
 *
 * Return: 98
 */

void print_to_98(int n)
{
	if (n != 98)
	{
		while (n != 98)
		{
			printf("%i", n);
			printf(", ");

			if (n < 98)
				n++;

			else
				n--;

		}
	}

	else
	{
		printf("%i \n", 98);
	}
}
