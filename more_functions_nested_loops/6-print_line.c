#include "main.h"
/**
 * print_line - function that print negative or positif check
 * _putchar - writes the character c to stdout
 *Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');

	}
	else 
	{
		for (i=0; i <= n; i++)
		{
			_putchar(95);
		}
			_putchar('\n');
	}

}