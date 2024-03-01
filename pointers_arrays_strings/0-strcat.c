#include "main.h"

/**
 * _strcat - Entry point
 *
 * Description: a function that concatenates two strings
 * @src: string
 * @dest: string
 *
 * Return: the value of the pointer dest
 */

char *_strcat(char *dest, char *src)
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

	for (c = 0; dest[c] != '\0'; c++)
	{
		dest[j] = src[c];
		src++;
	}

	dest[c] = '\0';

	return (dest);
}
