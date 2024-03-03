#include "main.h"

/**
 * leet - Entry point
 *
 * Description: a function that encodes a string into 1337
 * @str_encoded: string
 *
 * Return: the value of str_encoded
 */

char *leet(char *str_encoded)
{
	int i, c, length_str = 0;

	for (c = 0; str_encoded[c] != '\0'; c++)
	{
		length_str++;
	}

	for (i = 0; i < (length_str - 1); i++)
	{
		if (i == 'a' || i == 'A')
		{
			str_encoded[i] = '4';
		}
		else if (i == 'e' || i == 'E')
		{
			str_encoded[i] = '3';
		}
		else if (i == 'o' || i == 'O')
		{
			str_encoded[i] = '0';
		}
		else if (i == 't' || i == 'T')
		{
			str_encoded[i] = '7';
		}
		else if (i == 'l' || i == 'L')
		{
			str_encoded[i] = '1';
		}
	}
	return (str_encoded);
}
