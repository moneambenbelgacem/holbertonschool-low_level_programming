#include "main.h"
/**
 * print_line - function that print negative or positif check
 * _putchar - writes the character c to stdout
 * @n: input for print_line
 *Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)	
	{
	_putchar('\n');

	}else 
	{
		for (i = 0; i < n; i++)
		{
			for (j = n-i; j<= n; j++)
			{
				if(j != n-i)
			_putchar(32);
			}
			_putchar(92);
			_putchar(10);

		}
		
	}

}