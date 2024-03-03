#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - Entry point
 *
 * Description: a function that capitalizes all words of a string
 * @the_string: string
 *
 * Return: the value of the_string
 */

char *cap_string(char *the_string)
{
	int i = 0;
	char separator[] = " \n,;.!?(){}	";

	while (the_string[i] != '\0')
	{
		if (i == 0 || strchr(separator, the_string[i - 1]) != NULL)
		{
			the_string[i] = toupper(the_string[i]);
		}

		else
		{
			continue;
		}

		i++;
	}

	return (the_string);
}
