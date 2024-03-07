#include "main.h"

/**
 * is_prime_number - Entry point
 *
 * Description: a function that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: integer
 *
 * Return: an integer
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (test_division(n, 2));
	}
}

/**
 * test_division - Entry point
 *
 * Description: a function that test if n is divisible by n
 * @n: integer
 * @d: integer
 *
 * Return: a call to the function test_division
 */

int test_division(int n, int d)
{
	if (d == 1)
	{
		return (0);
	}
	else if (d == n)
	{
		return (1);
	}
	else
	{
		if (n % d == 0)
		{
			return (0);
		}
		else
		{
			return (test_division(n, (d + 1)));
		}
	}
}

