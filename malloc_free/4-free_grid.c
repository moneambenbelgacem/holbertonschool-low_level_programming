#include "main.h"

/**
 * free_grid - function that print negative or positif check
 *@grid: length of array
 *@height: length of array
 *Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i, * currentIntPtr;

	for (i = 0; i < height; i++)
	{

		currentIntPtr = grid[i];
		free(currentIntPtr);
	}
	free(grid);
}
