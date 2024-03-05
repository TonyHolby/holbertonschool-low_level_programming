#include "main.h"
#include "2-strlen.c"

/**
 * print_chessboard - Entry point
 *
 * Description: a function that prints the chessboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
