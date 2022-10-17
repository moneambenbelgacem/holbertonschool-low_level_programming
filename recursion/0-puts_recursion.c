#include "main.h"
/**
 * _puts_recursion - update the value of n
 * _putchar - puts the char
 *@s: value input
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		printf("\n");

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

