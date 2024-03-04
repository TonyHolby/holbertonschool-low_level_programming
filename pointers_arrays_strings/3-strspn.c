#include "main.h"
#include "2-strlen.c"
#include "3-strcmp.c"

/**
 * _strspn - Entry point
 *
 * Description: a function that gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, nb_bytes = 0;

	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; j < _strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				nb_bytes++;
			}

			else
			{
				continue;
			}
		}
	}

	return (nb_bytes);
}
