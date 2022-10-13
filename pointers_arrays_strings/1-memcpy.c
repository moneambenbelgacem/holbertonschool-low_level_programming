#include "main.h"
#include <stdio.h>
/**
 * _memset - print an array of integers
 * _putchar - writes the character c to stdout
 * @dest: an input point to buffer
 * @src: char to plain
 * @n: char to plain
 * Return: nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned i = 0;

	while ((*src != '\0')&& (i <= n))
	{
		
		
			*dest = *src;
			src++;
			dest++;
			i++;
		
	}
	dest[i+1] = '\0';
	return (dest);
}