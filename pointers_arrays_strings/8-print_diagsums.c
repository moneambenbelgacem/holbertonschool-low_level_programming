#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print an array of integers
 * @a: char to plain
 * @size: char to plain
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum = 0, count = 0, sum_two = 0;
	int *pos;

	pos = a;
	for (i = 0; i < size; i++)
	{

		sum += *(a + i);
		a += size;
	}
	printf("%ld, ", sum);

	i = 0;
	while (count < size)
	{
		i += size - 1;
		sum_two += *(pos + i);

		count++;
	}
	printf("%ld", sum_two);
	printf("\n");
}
