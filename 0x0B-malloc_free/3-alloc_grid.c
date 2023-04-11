#include "main.h"

/*RAYANE - MAD*/

/**
 * alloc_grid - llocat a grid
 *
 * Description: point to a 2 dimensional array
 *
 * @width: input of the width
 * @height: input of the height
 *
 * Return: a pointer
*/


int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}

	}

	return (grid);
}
