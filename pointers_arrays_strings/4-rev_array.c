#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_array -  update the value of n
 *@a: value input
 *@n: value input
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int ptr = n - 1, aux, i = 0;

	while ((i < n / 2) && (ptr > n / 2))
	{
		aux = a[i];
		a[i] = a[ptr];
		a[ptr] = aux;
		ptr--;
		i++;
	}
}