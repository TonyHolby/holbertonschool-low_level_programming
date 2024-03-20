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
		if (args != NULL)
		{
			printf("%s", va_arg(args, char *));
		}
		else
		{
			printf("(nil)");
		}

		if (i < (n - 1) && separator != NULL && args != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
