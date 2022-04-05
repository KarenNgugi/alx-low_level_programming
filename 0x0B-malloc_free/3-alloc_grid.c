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
		int **array = malloc(height * sizeof(int *));

		if (array == NULL)
			return (NULL);

		for (i = 0; i < height; i++)
		{
			array[i] = malloc(width * sizeof(int));

			if (array[i] == NULL)
				return (NULL);

			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}

		return (array);

		for (i = 0; i < height; i++)
			free(array[i]);
		free(array);
	}
}
