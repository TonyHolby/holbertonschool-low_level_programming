#include "main.h"

/**
 * _atoi - Entry point
 *
 * Description: a function that convert a string to an integer
 * @s: string
 *
 * Return: 0 if there no numbers in the string, else the number
 */

int _atoi(char *s)
{
	int i, j;
	int sign = 1;
	int number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (s[i] == j)
			{
				number = (number * 10) + (j - '0');
			}
		}
		if (s[i] == ' ')
		{
			continue;
		}
		if (s[i] == '-')
		{
			sign = -sign;
		}
		else if (s[i] == '+')
		{
			sign = +sign;
		}
	}
	if (sign > 0 || sign < 0)
	{
		return (sign * number);
	}
	else
	{
		return (0);
	}
}
