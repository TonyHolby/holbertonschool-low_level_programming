#include "main.h"
#include "2-strlen.c"

/**
 * _memset - Entry point
 *
 * Description: a function that fills memory with a constant byte
 * @s: string
 * @b: char
 * @n: unsigned integer
 *
 * Return: the value of a pointer to a memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	 for (i = 0; i <= n; i++)
	 {
		 s[i] = b;
	 }

	return (s);
}
