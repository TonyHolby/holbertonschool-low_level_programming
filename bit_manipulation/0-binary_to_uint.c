#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0 if b is NULL or if there is another
 * char than 0 or 1 in the string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, len = 0, n = 0, sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
		{
			n++;
		}
		else if (b[i] == '1')
		{
			sum += (1 << (len - 1 - i));
			n++;
		}
		else
		{
			return (0);
		}
	}

	return (sum);
}

