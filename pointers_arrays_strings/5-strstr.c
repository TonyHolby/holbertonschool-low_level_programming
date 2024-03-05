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
	int i;
	char *ptr_first;

	for (i = 0; i < _strlen(haystack); i++)
	{
		if (haystack[i] == *needle)
		{
			return (&haystack[i]);
		}
		else
		{
			ptr_first = "NULL";
		}
	}

	return (ptr_first);
}
