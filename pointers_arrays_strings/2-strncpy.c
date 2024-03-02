#include "main.h"

/**
 * _strncpy - Entry point
 *
 * Description: a function that copies a string
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: the pointer dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
