#include "main.h"
/**
 * free_grid - free grid.
 *
 * @grid: 2d grid.
 * @height: integer.
 *
 * Return: nothing
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
