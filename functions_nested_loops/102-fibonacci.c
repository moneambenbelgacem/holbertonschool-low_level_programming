#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int tab[51], i;

	tab[1] = 1;
	tab[2] = 1;
	

	for (i = 2; i <= 50; i++)
	{	printf("%d, ", tab[i]);
		tab[i+1] = tab[i] + tab[i-1];
		
	}

	return (0);
}