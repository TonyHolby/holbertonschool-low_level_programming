#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry point
 *
 * Description: a function that reverses a string
 * @s: string
 *
 */

void rev_string(char *s)
{
	int i, letter;
	int length_of_s = 0;
	char reverse_of_s[] = ;

	reverse_of_s = s[(length_of_s - 1) - i];

	for (letter = 0; s[letter] != '\0'; letter++)
	{
		length_of_s++;
	}

	for (i = 0; i < length_of_s; i++)
	{
		reverse_of_s[i] = s[(length_of_s - 1) - i];
	}
	reverse_of_s[length_of_s] = '\0';
}
