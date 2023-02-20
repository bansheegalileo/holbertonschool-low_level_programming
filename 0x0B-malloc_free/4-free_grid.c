#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the grid, man
 *
 * @grid: 2D grid of ints
 *
 * @height: grid height
 *
 * Return: VOID
 */

void free_grid(int **grid, int height)
{
		int a;

		for (a = 0; a < height; a++)
				free(*(grid + a));
		free(grid);
}
