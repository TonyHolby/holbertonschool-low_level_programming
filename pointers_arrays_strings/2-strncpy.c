#include "main.h"

/**
 * _strncpy - Entry point
 *
 * Description: a function that copies a string
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int c = 0;
	int length_src = 0;
	int length_dest = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		length_src++;
	}

	for (j = 0; dest[j] != '\0'; j++)
	{
		length_dest++;
	}

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}

	dest[n] = '\0';

	return (dest);
}
