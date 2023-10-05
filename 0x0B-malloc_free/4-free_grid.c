#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of the grid
 * Description: frees memory of the grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int ca;

	for (ca = 0; ca < height; ca++)
	{
		free(grid[ca]);
	}
	free(grid);
}
