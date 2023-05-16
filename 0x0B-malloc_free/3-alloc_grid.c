#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - returns pointer to two dimensional array
 *@width: input number
 *@height: input number
 *Return: returns array
 */

int **alloc_grid(int width, int height)
{
	int **arr, idx, idy;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (idx = 0; idx < height; idx++)
	{
		arr[idx] = malloc(width * sizeof(int));
		if (arr[idx] == NULL)
		{
			free(arr[idx])
			free(arr);
			return (NULL);
		}
		for (idy = 0; idy < width; idy++)
		{
			arr[idx][idy] = 0;
		}
	}

	return (arr);
}
