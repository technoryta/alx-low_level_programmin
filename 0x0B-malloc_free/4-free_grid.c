#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocated by alloc_grid
 * @grid: grid to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL || height == 0)
		return;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}
