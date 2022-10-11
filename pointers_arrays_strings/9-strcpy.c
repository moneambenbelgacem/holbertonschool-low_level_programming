#include "main.h"
#include <stdio.h>

/**
 * strcpy -  update the value of n
 *@src: value input
 *@dest: value input
 * Return: Always 0.
 */
char * _strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{

		dest[i] = src[i];
		i++;
	}

	return (dest);
}

