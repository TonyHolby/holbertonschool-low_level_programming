#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 *
 * Description: a function that prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: array
 * @size: integer
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	for (j = (size - 1); j >= 0; j--)
	{
		sum2 += a[j * size + (size - 1 - j)];
	}

	printf("%d, %d\n", sum1, sum2);
}
