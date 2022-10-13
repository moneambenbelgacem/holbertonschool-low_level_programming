#include "main.h"
#include <stdio.h>
/**
 * _memset - print an array of integers
 * _putchar - writes the character c to stdout
 * @s: an input point to buffer
 * @b: char to plain
 * @n: char to plain
 * Return: nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
