#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcmp -  update the value of n
 *@s1: value input
 *@s2: value input
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int res;

	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	res = *s1 - *s2;
	if (res == 0)
		return (0);

	return (res);
}

