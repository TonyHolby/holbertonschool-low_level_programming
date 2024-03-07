#include "main.h"

/**
 * factorial - Entry point
 *
 * Description: a function that returns the factorial of a given number
 * @n: integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
