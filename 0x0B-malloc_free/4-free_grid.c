#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees a two dimensional array
 *@grid: input array
 *@height: input number
 *Return: none
 */

void free_grid(int **grid, int height)
{
	int idx;

	if (grid != NULL || height > 0)
	{
		for (idx = 0; idx < height; idx++)
		{
			free(grid[idx]);
		}
		free(arr);
	}

}
