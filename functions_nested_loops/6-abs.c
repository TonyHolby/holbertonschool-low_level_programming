#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: a function that computes the absolute value of an integer
 * @n: variable
 *
 * Return: abs(n)
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
