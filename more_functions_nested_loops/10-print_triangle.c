#include "main.h"
/**
 * print_triangle - function that print negative or positif check
 * _putchar - writes the character c to stdout
 * @size: input for print_#
 *Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j,d;

	for (i = 1; i <= size; i++)
	{
		d=size-i;
		for (j = 0; j <= size; j++)
		{
			if (j <= d)
			{
			printf(" ");
			}
			else 
			{
				printf("#");
			}


		}
		printf("\n");
		
	}

 
}