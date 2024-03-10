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
	int i;
	int sign = 1;
	int number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = (number * 10) + (s[i] - '0');
			if (s[(i + 1)] == ' ')
			{
				break;
			}
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
