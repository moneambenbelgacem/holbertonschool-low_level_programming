#include "main.h"
/**
 * sqrt_check - check the entree value
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

/**
 * _sqrt_recursion - recursion function
 *@n: value input
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
