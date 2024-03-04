#include "main.h"
#include "2-strlen.c"
#include <stddef.h>

/**
 * _strchr - Entry point
 *
 * Description: a function that locates a character in a string
 * @s: string
 * @c: char
 *
 * Return: a pointer to the first occurence of the character c in the string s
 * else returns "NULL"
 */

char *_strchr(char *s, char c)
{
	int i;
	char *pointer = NULL;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] == c)
		{
			pointer = &s[i];
			break;
		}
	}
	if (pointer == NULL)
	{
		pointer = "NULL";
	}
	return (pointer);
}
