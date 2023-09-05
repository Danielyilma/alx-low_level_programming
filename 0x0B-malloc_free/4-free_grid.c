#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - creates array and initialize
 *
 * @grid: uint
 *
 * @height: character
 *
 * Return: character pointer
 *
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);
	free(grid);
}
