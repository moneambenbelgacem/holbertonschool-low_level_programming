#include "main.h"
/**
 * array_range - function to calculate number of words
 *@min: string being passed to check for words
 *@max: string being passed to check for words
 * Return: number of words
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
