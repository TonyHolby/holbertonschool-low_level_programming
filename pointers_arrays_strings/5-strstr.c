#include "main.h"
#include "2-strlen.c"

/**
 * _strstr - Entry point
 *
 * Description: a function that locates a substring
 * @haystack: string
 * @needle: char
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *temp;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			temp = haystack;

			while (*needle != '\0' && *haystack == *needle)
			{
				haystack++;
				needle++;

				if (*needle == '\0')
				{
					return (temp);
				}
				else
				{
					return (haystack - 1);
				}
			}

			needle = needle - (haystack - temp);
			haystack = temp + 1;
		}

		else
		{
			haystack++;
		}
	}

	return ('\0');
}
