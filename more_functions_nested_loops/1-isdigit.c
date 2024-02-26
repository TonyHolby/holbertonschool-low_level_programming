#include <stdlib.h>

/**
 * _isdigit - Entry point
 *
 * Description: a function that checks for a digit (0 through 9)
 *@c: variable
 *
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		if (c == num)
			return (1);

		else
			continue;
	}

	return (0);
}
