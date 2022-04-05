#include "main.h"

/**
 * alloc_grid - returns pointer to 2D array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);

	else
	{
		int i, j;
		int **arr = malloc(height * sizeof(int));

		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(width * sizeof(int));

			for (j = 0; j < height; j++)
				arr[i][j] = 0;
		}

		return (arr);

		for (i = 0; i < height; i++)
			free(arr[i]);

		free(arr);
	}
}
