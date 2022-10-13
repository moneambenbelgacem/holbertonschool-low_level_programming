#include "main.h"
#include <stdio.h>
/**
 * _memcpy - print an array of integers
 * _putchar - writes the character c to stdout
 * @dest: an input point to buffer
 * @src: char to plain
 * @n: char to plain
 * Return: nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while ((*src != '\0') && (i < n))
	{

		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
