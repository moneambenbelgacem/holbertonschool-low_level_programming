#include "main.h"
/**
 * print_square - function that print negative or positif check
 * _putchar - writes the character c to stdout
 * @n: input for print_line
 *Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
