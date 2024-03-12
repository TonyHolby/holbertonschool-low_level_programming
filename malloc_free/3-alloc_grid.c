#include "main.h"

/**
 * alloc_grid - Entry point
 *
 * Description: Write a function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: integer
 * @height: integer
 *
 * Return: NULL if width or height = 0, else a pointer to a 2 dimensionnal
 * array
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (k = 0; k < width; k++)
		{
			grid[i][k] = 0;
		}
	}
	return (grid);
}
