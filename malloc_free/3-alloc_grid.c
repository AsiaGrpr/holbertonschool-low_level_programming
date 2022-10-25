#include <stdlib.h>

/**
  * alloc_grid - function that returns a pointer
  *	to a 2 dimensional array of integers
  * @width: width of the grid
  * @height:  height of the grid
  *
  * Return: pointer of 2d array or NULL
  */

int **alloc_grid(int width, int height)
{
	int i, j, n;
	int **p;

	if (width == 0 || height == 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (n = 0; n < width; n++)
		{
			p[j][n] = 0;
		}
	}
	return (p);
}
