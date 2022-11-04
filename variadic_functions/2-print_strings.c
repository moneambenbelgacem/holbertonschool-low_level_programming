#include "variadic_functions.h"
/**
 * print_strings - Entry point
 *
 * @separator: string
 * @n: nuber of elem
 *
 * Description: 'print name.'
 *
 * Return: number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	 char *x ;
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		x = va_arg(args, char *);

		if (x == NULL )
		printf("nil\n");
		
		if (separator != NULL && x)
		{

			if (i == n)
			{

				printf("%s", x);
			}
			else
			{

				printf("%s%s", x, separator);
			}
		}
		else
		{
			printf("%s", x);
		}
	}
	printf("\n");
}
