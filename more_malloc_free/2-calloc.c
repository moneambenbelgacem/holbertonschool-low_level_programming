#include "main.h"
/**
 * string_nconcat - function to calculate number of words
 *@s1: string being passed to check for words
 *@s2: string being passed to check for words
 *@n: input for length to concat
 * Return: number of words
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = '\0';
	return (ptr);
}