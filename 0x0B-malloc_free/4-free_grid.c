#include "main.h"
#include <stdlib.h>

/**
 * free_grid - create 2 dimensional array
 * @grid: grid
 * @height: height
 *
 * Return: 2 dimensional array if not null
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		int *temp = grid[i];

		free(temp);
	}
	free(grid);
}
