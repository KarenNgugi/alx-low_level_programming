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
		int i = 0, j;
		int **array = (int **)malloc(height * sizeof(int *));

		if (array == NULL)
		{
			free(array);
			return (NULL);
		}

		for (i = 0; i < height; i++)
		{
			array[i] = (int *)malloc(width * sizeof(int));

			if (array[i] == NULL)
			{
				free(array[i]);
				free(array);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}

		return (array);

		/* freeing memory */
		for (i = 0; i < height; i++)
			free(array[i]);

		free(array);
	}
}
