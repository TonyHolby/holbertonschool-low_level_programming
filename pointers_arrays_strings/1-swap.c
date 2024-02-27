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
	int temporaire = 0;

	temporaire = b;
	b = a;
	a = temporaire;
}
