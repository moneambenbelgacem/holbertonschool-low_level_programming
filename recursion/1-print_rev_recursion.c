#include "main.h"
/**
 * _print_rev_recursion - update the value of n
 * _putchar - puts the char
 *@s: value input
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}