#include "main.h"
/**
 * _sqrt_recursion - update the value of n
 * sqrt_check - check the entree value
 * _putchar - puts the char
 *@n: value input
 *@x: value input
 *@y: value input
 * Return: Always 0.
 */
int sqrt_check(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	else
	{
		return (sqrt_check(x + 1, y));
	}
}
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
