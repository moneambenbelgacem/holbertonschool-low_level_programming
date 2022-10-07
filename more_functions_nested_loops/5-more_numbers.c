#include "main.h"
#include<unistd.h>
/**
 * more_numbers - function that print negative or positif check
 * _putchar - writes  the character c to stdout
 *Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, j , c;
	c = 0;
for (j = 0; j <= 9; j++)
{

	for (i = 0; i <= 14; i++)
	{
		if (i < 10)
		{
		i = c;
		}
		else
		{
		_putchar('0'+ c / 10 );
		_putchar('0' + c % 10  );
		}
		_putchar(10);
	}
	
}
}
