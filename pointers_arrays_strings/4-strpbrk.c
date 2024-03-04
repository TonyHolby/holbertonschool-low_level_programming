#include "main.h"
#include "2-strlen.c"

/**
 * _strpbrk - Entry point
 *
 * Description: a function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *pointer_to_the_first_occurence;

	for (i = 0; i < _strlen(s); i++)
	{
		for (j = 0; j < _strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				pointer_to_the_first_occurence = &s[j];
			}

			else if (s[i] == '\0')
			{
				pointer_to_the_first_occurence = "NULL";
			}
		}
	}

	return (pointer_to_the_first_occurence);
}
