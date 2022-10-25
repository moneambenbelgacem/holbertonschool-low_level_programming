#include "main.h"
/**
 * _calloc - function to calculate number of words
 *@nmemb: string being passed to check for words
 *@size: string being passed to check for words
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
