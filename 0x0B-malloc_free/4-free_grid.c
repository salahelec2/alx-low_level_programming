#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Free 2D array
 *
 * @grid: Pointer to 2D array
 * @height: height of the array
 *
 * Return: this function returns nothing
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
