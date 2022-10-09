#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int tab[50], i;

	tab[1] = 1;
	tab[2] = 1;
	printf("%d, %d\n", tab[1], tab[2]);

	for (i = 3; i <= 50; i++)
	{
		tab[i] = tab[i - 1] + tab[i - 2];
		printf("%d, ", tab[i]);
	}

	return (0);
}