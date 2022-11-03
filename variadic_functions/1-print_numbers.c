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
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		x = va_arg(args, int);
		if (separator != NULL)
		{

			if (i == n)
			{

				printf("%d", x);
			}
			else
			{

				printf("%d%s", x, separator);
			}
		}
		else
		{
			printf("%d", x);
		}
	}
	printf("\n");
}