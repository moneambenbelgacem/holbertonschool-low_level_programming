#include "main.h"

/**
 * swap_int - update the value of n
 *@a: value input
 *@b: value input
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
