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
	char string_src[20];
	char string_dest[20];
	int i = 0, j = 0;
	
	src = string_src;
	dest = string_dest;

	while (string_src[20] != '\0')
	{
		++src;
		i++;
	}

	while (string_dest[20] != '\0')
	{
		*src = *dest;
		src++;
		dest++;
		j++;
	}

	return (dest);
}
