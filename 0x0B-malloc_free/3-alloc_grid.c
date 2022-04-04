#include "main.h"

/**
 * alloc_grid - returns pointer to 2D array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int c = malloc(width * sizeof(int)), r = malloc(height * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			c[i][j] = 0;
		}
	}
	return (*c);
	free(c)
}
