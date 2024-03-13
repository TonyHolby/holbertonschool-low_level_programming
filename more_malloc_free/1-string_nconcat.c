#include "main.h"

/**
 * string_nconcat - Entry point
 *
 * Description: Write a function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: unsigned integer
 *
 * Return: a pointer which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l, length_s1 = 0, length_s2 = 0;
	char *pointer;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		length_s1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		length_s2++;
	}
	if (n >= length_s2)
	{
		n = length_s2;
	}
	pointer = malloc(length_s1 + n + 1);
	if (pointer == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < length_s1; k++)
	{
		pointer[k] = s1[k];
	}
	for (l = 0; l < n; l++)
	{
		pointer[length_s1 + l] = s2[l];
	}

	pointer[length_s1 + n] = '\0';
	
	return (pointer);
}
