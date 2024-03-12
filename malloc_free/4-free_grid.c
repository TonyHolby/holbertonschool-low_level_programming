#include "main.h"

/**
 * free - Entry point
 *
 * Description: a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: pointer to pointer of an integer
 * @height: integer
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
