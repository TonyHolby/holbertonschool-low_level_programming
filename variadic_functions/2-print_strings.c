#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Entry point
 *
 * Description: a function that prints strings, followed by a new line
 * @separator: constant char
 * @n: constant unsigned integer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *string_i = va_arg(args, char *);

		if (string_i != NULL)
		{
			printf("%s", string_i);
		}
		else
		{
			printf("(nil)");
		}

		if (separator == NULL)
		{
			continue;
		}

		if (i < (n - 1) && string_i != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
