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
	int i, j;
	char *pointer_to_the_beginning;

	for (i = 0; i < _strlen(needle); i++)
	{
		for (j = '\t'; j <= _strlen(haystack); j++)
		{
			if (haystack[j] == needle[i])
			{
				pointer_to_the_beginning = &haystack[j];
				break;
			}
		}
	}
	if (haystack[j] == '\0')
	{
		pointer_to_the_beginning = "NULL";
	}
	return (pointer_to_the_beginning);
}
