#include "variadic_functions.h"
/**
 * sum_them_all - Entry point
 *
 * @n: string
 *
 * Description: 'print name.'
 *
 * Return: number
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, x;
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	return (sum);
}
