#include "main.h"
/**
 * more_numbers - function that print negative or positif check
 * _putchar - writes the character c to stdout
 *Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i < 10)
		{
		_putchar(i + '0');

		}
		else
		{

		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		}
	}
	printf("\n");
}
