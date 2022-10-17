#include "main.h"
/**
 * factorial - update the value of n
 * _putchar - puts the char
 *@n: value input
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
	{

		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
