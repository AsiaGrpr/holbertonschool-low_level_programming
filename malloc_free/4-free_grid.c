#include <stdlib.h>

/**
  * free_grid - function that frees a 2 dimensional grid
  * @grid: pointer of 2d array grid
  * @height: height of the grid to free
  *
  * Return: NULL value
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
