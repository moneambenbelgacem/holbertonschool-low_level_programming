#include "main.h"
/**
 * more_numbers - function that print negative or positif check
 * _putchar - writes  the character c to stdout
 *Return: Always 0 (Success)
 */
void more_numbers(void)
{
	char i, j, y,x;

	for (j = 0; j <= 9; j++)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
		
				y = i;
			
			else
			{
				x = i / 10;
				y = i % 10;
				_putchar( x + '0');
				
			}
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
