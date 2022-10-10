#include "main.h"
#include<stdio.h>

/**
 * print_rev - update the value of n
 *@s: value input
 * Return: Always 0.
 */
void puts2(char *str)
{
	int l, i;
	char *saut, ch;

	l = strlen(str);
	saut = str;
	for (i = 0; i <= l/2; i++)
	{
		ch = *saut;
		printf("%c", ch);
		saut += 2;

		
	}
	printf("\n");
}
