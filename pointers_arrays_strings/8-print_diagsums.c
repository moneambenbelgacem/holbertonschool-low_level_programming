#include "main.h"
#include <stdio.h>
/**
 * _strchr - print an array of integers
 * _putchar - writes the character c to stdout
 * @s: char to plain
 * @c: char to plain
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