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
	int i = 0, j = 0;
	char *pointer_to_the_beginning;

	for (i = 0; i < _strlen(haystack); i++)
	{
		if (haystack[i] != needle[j])
		{
			pointer_to_the_beginning = "NULL";
		}

		for (j = 1; j < _strlen(needle); j++)
		{
			i++;
			if (haystack[i] == needle[j])
			{
				continue;
			}
			if (needle[j] == '\0')
			{
				pointer_to_the_beginning = needle;
			}
		}
	}

	return (pointer_to_the_beginning);
}
