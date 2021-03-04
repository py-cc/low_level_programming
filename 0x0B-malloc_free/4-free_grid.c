#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - that frees a 2 dimensional grid previously created
* @grid: 2 dimensional grid
* @height: height of 2D
*
*
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
