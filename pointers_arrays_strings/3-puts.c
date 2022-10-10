#include "main.h"

/**
 * swap_int - update the value of n
 * _putchar - print character
 *@str: value input
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
