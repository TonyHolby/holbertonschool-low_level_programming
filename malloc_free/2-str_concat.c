#include "main.h"

/**
 * str_concat - Entry point
 *
 * Description: a function that concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: NULL if s1 or s2 = NULL, else a pointer which contains
 * s1 followed by s2
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k = 0, l = 0, length_s1 = 0, length_s2 = 0;
	char *c = NULL;

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
	c = malloc(((length_s1 + length_s2) + 1) * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	while (k < length_s1)
	{
		c[k] = s1[k];
		k++;
	}
	while (l < length_s2)
	{
		c[length_s1 + l] = s2[l];
		l++;
	}
	c[length_s1 + length_s2] = '\0';
	return (c);
}
