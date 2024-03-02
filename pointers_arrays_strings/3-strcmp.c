#include "main.h"

/**
 * _strcmp - Entry point
 *
 * Description: a function that compares two strings
 * @s1: string
 * @s2: string
 *
 * Return: 0 if s1 and s2 are equal, a negative value if s1 is less than s2
 * and a positive value if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	int length_s1 = 0, length_s2 = 0;
	int value_s1 = 0, value_s2 = 0;


	for (i = 0; s1[i] != '\0'; i++)
	{
		length_s1++;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		length_s2++;
	}

	if (length_s1 < length_s2)
	{
		for (k = 0; k <= length_s1; k++)
		{
			value_s1 = value_s1 + s1[k];
			value_s2 = value_s2 + s2[k];
		}
		return (value_s1 - value_s2);
	}

	else if (length_s1 > length_s2)
	{
		for (k = 0; k <= length_s2; k++)
		{
			value_s1 = value_s1 + s1[k];
			value_s2 = value_s2 + s2[k];
		}
		return (value_s1 - value_s2);
	}

	else
	{
		if (value_s1 == value_s2)
		{
			return (0);
		}

		else
		{
			for (k = 0; k != '\0'; k++)
			{
				value_s1 = value_s1 + s1[k];
				value_s2 = value_s2 + s2[k];
			}
			return (value_s1 - value_s2);
		}
	}

}
