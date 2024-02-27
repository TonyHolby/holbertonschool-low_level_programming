#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: a function that swaps the values of two integers
 * @a: integer
 * @b: integer
 *
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
