#include "main.h"

/**
 * alloc_grid - function that print negative or positif check
 *@width: length of array
 *@height: length of array
 *Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		
		int* currentIntPtr = grid[i];
    free(currentIntPtr);
	}
	free(grid);
}