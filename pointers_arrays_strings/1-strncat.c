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

	while (dest[i] != '\0')
	{
		i++;
	}
	for (l = 0; l < n; l++)
	{
		dest[i + l] = src[l];
	}
	dest[i + l] = '\0';

	return (dest);
}