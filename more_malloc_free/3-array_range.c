#include "main.h"
/**
 * _calloc - function to calculate number of words
 *@nmemb: string being passed to check for words
 *@size: string being passed to check for words
 * Return: number of words
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a = 0;

	if (min > max)
		return (NULL);

	ptr = (int *)malloc(sizeof(int) * (max - min) + 1);
	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[a] = min;
		min++;
		a++;
	}
	return (ptr);
}