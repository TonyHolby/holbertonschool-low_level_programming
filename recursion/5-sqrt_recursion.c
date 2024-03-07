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
