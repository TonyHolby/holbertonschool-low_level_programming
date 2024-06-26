#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 *
 * Description: a function that returns the sum of all its parameters
 * @n: constant unsigned integer
 *
 * Return: 0 if n == 0, esle the result of the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nb_args;
	unsigned int i;
	int res = 0;

	va_start(nb_args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		res += va_arg(nb_args, int);
	}

	va_end(nb_args);

	return (res);
}
