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
	while (*haystack != *needle)
	{
		haystack++;
		needle++;
	}
	if (*haystack == *needle)
	{
		return (haystack);
	}

	return (NULL);
}
