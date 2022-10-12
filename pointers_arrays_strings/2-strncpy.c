#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncpy -  update the value of n
 *@src: value input
 *@dest: value input
 *@n: value input
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{

		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
