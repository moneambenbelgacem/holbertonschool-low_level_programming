#include "main.h"
#include <stdio.h>

/**
 * puts2 - update the value of n
 *@s: value input
 * Return: Always 0.
 */
void puts2(char *str)
{
	int l, i;

	l = strlen(str) - 1;

	for (i = 0; i <= l; i += 2)
	{

		printf("%c", str[i]);
	}
	printf("\n");
}
