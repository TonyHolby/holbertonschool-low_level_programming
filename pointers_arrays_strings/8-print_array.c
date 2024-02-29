#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 *
 * Description: a function that prints n elements of an array of
 * integers, followed by a new line
 * @a: integer
 * @n: integer
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < (n - 1))
	{
		printf("%d", a[i]);
		printf(", ");
		i++;
	}

	if (i == (n - 1))
	{
		printf("%d", a[i]);
	}

	printf("\n");
}
