#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees 2 dimensional of previous alloc_grid
 * @grid: the address value of the two dimensional grid
 * @height: int to be checked
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0 ; f < height ; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
