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
	int i = 0, c = 0, tab_temp;
	int j = n - 1;
	int length_a = 0;

	for (c = 0; a[c] != '\0'; c++)
	{
		length_a++;
	}

	for (i = 0; i < j; i++, j--)
	{
		tab_temp = a[i];
		a[i] = a[j];
		a[j] = tab_temp;
	}
}
