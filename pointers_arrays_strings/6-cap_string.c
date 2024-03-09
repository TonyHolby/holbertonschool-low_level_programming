#include "main.h"
#include "5-string_toupper.c"

/**
 * cap_string - Entry point
 *
 * Description: a function that capitalizes all words of a string
 * @the_string: string
 *
 * Return: a string
 */

char *cap_string(char *the_string)
{
	int i, j, k;

	for (i = 0; the_string[i] != '\0'; i++)
	{
		if (the_string[i] == ' ' ||
			       the_string[i] == '\t' || the_string[i] == '\n' ||
			       the_string[i] == ',' || the_string[i] == ';' ||
			       the_string[i] == '.' || the_string[i] == '!' ||
			       the_string[i] == '?' || the_string[i] == '"' ||
			       the_string[i] == '(' || the_string[i] == ')' ||
			       the_string[i] == '{' || the_string[i] == '}')
		{
			for (j = 'a', k = 'A'; j <= 'z'; j++, k++)
			{
				if (the_string[0] == j)
				{
					the_string[0] = k;
				}

				else if (the_string[i + 1] == j)
				{
					the_string[i + 1] = k;
				}
			}
		}
	}

	return (the_string);
}
