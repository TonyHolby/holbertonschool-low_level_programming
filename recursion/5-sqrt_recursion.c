#include "main.h"

/**
 * _sqrt_recursion - Entry point
 *
 * Description: a function that returns the natural square root of a number
 * @n: integer
 *
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, 0));
	}
}

/**
 * sqrt_helper - helper function for the recursivity
 *
 * Description: a function that does recursion
 * @n: integer
 * @a: integer
 *
 * Return: a call to sqrt_helper function
 */

int sqrt_helper(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, (a + 1)));
	}
}
