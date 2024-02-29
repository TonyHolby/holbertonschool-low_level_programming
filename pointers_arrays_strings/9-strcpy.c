#include "main.h"

/**
 * _strcpy - Entry point
 *
 * Description: a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: string
 * @src: string
 *
 * Return: the value of the pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	for (c = 0; src[c] == '\0'; c++)
	{
		*dest = src[c];
	}

	return (dest);
}
