#include "main.h"
#include "2-strlen.c"

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
	int i, j;
	char *letter = "aAeEoOtTlL";
	char *encode = "4433007711";

	for (i = 0; i < _strlen(str_encoded); i++)
	{
		for (j = 0; j < _strlen(letter); j++)
		{
			if (str_encoded[i] == letter[j])
			{
				str_encoded[i] = encode[j];
			}
		}
	}
	return (str_encoded);
}
