#include "main.h"
#include <stdio.h>

/**
 * puts2 - update the value of n
 *@str: value input
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i,l; 
	l = strlen(src);

	for (i = 0; i <= l-1; i++)
	{
		dest[i]=src[i];
	}
	return(dest);
}