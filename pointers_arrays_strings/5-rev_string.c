#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description: a function that reverses a string
 * @s: string
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int c = 0;
	int length_of_s = 0;
	char temp;

	for (c = 0; s[c] != '\0'; c++)
	{
		length_of_s++;
	}

	for (i = 0, j = (length_of_s - 1); i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
