#include "main.h"

/**
 * reverse_array - Entry point
 *
 * Description: a function that compares two strings
 * @a: integer
 * @n: integer 
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0, c = 0;
	int length_array = 0;
	int temp[n];

	for (c = 0; a[c] != '\0'; c++)
	{
		length_array++;
	}

	for (i = 0, j = (length_array - 1); i < j; i++, j--)
	{
		temp[i] = a[i];
		a[i] = temp[j];
	}
}
