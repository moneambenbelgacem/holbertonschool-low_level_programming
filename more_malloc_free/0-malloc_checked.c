#include "main.h"
/**
 * malloc_checked - function to calculate number of words
 * @b: string being passed to check for words
 *
 * Return: number of words
 */
void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == 0)
		exit(98);

	return (x);
}
