#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat -  update the value of n
 *@src: value input
 *@dest: value input
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0, l;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (l = 0; src[l] != '\0' && l < n; l++)
	{
		dest[i + l] = src[l];
	}

	return (dest);
}
