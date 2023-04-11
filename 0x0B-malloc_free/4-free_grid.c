#include "main.h"

/*RAYANE - MAD*/

/**
 * free_grid - free a grid
 *
 * Description: free the memory of a grid
 *
 * @grid: the grid
 * @height: input of the height
 *
 * Return: nothing
*/


void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
