#include "main.h"

/**
 * _atoi - Entry point
 *
 * Description: a function that convert a string to an integer
 * @s: string
 *
 * Return: 0 if there no numbers in the string and otherwise the number
 */

int _atoi(char *s)
{
	int c, i, j, length = 0;
	int sign = 0;
	int number = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		length++;
	}

	for (i = 0; i < (length - 1); i++)
	{
		if (s[i] == '\t' || s[i] == '\n' || s[i] == '\v' || s[i] == '\f' ||
				s[i] == '\r' || s[i] == ' ')
			continue;
		if (s[i] == '-')
			sign--;
		else if (s[i] == '+')
			sign++;
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == j)
				++number;
		}
	}
	if (sign % 2 == 0)
	{
		return (number);
	}
	else if (sign % 2 != 0)
	{
		return (-number);
	}
	else
	{
		return (0);
	}
}
