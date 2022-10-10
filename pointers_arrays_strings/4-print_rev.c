#include "main.h"

/**
 * print_rev - update the value of n
 *@s: value input
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int t;
	int i;

	t = strlen(s);

	for (i = t - 1; i >= 0; i--)
	{

		_putchar(s[i]);
	}
	_putchar('\n');
}
