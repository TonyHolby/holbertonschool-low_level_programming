#include "main.h"

/**
 * _strchr - Entry point
 *
 * Description: a function that locates a character in a string
 * @s: string
 * @c: char
 *
 * Return: a pointer to the first occurence of the character c in the string s
 * else returns NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
