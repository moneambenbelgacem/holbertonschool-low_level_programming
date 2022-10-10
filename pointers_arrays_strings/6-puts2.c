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
	

	l = strlen(str);
	
	for (i = 0; i < l-1; i += 2)
	{
		
		printf("%c", str[i]);
		

		
	}
	printf("\n");
}
