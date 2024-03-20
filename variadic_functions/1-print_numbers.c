#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Entry point
 *
 * Description: a function that prints numbers, followed by a new line
 * @separator: constant char
 * @n: constant unsigned integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", va_arg(args, int));
		}

		if (i < n)
		{
			printf("%d\n", va_arg(args, int));
		}
	}

	else
	{
		printf("\n");
	}

	va_end(args);
}
