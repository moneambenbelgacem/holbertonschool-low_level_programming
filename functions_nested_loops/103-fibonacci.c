#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int nbr1, nbr2, fib, i;

	nbr1 = 1;
	nbr2 = 1;

	printf("%ld, ", nbr2);
	for (i = 2; i <= 10; i++)
	{
		fib = nbr1 + nbr2;
		if (i != 10)
		{

			printf("%ld, ", fib);
		}
		else
		{
			printf("%ld", fib);
		}
		nbr1 = nbr2;
		nbr2 = fib;
	}
	printf("\n");

	return (0);
}
