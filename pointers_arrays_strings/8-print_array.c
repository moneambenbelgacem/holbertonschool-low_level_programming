#include "main.h"
#include <stdio.h>

/**
 * print_array - update the value of n
 *@a: value input
 *@n: taille du tableau
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("array[%d] = %d\n", i, a[i]);
}
