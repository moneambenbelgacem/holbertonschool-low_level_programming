#include "main.h"

/**
 * alloc_grid - function that print negative or positif check
 *@width: length of array
 *@height: length of array
 *Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width == 0 || height == 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			for (--i; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
