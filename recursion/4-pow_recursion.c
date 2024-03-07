#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * Description: Write a function that returns the value of x raised to
 * the power of y
 * @x: integer
 * @y: integer
 *
 * Return: an integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
