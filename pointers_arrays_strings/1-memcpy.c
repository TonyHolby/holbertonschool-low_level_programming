#include "main.h"

/**
 * _memcpy - Entry point
 *
 * Description: a function that copies memory area
 * @dest: string
 * @src: string
 * @n: unsigned integer
 *
 * Return: the value of the pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
