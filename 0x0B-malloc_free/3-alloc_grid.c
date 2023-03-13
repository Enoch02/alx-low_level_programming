#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create 2 dimensional array
 * @width: width
 * @height: height
 *
 * Return: 2 dimensional array if not null
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);

	for (i = 0; i < 4; i++)
	{
		int j;

		grid[i] = malloc(sizeof(int) * width);
		for (j = 0; j < 6; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
