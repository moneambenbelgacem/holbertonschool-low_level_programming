#include "main.h"
#include <stdio.h>

/**
 * strcpy - update the value of n
 *@str: value input
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i,l;
	l = strlen(src);
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	
	return (dest);
}
