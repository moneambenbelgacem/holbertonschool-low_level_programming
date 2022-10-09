#include "main.h"
/**
 * print_number - function that print negative or positif check
 * _putchar - writes  the character c to stdout
 * @n: input for print_#
 *Return: Always 0 (Success)
 */
void print_number(int n)
{
	int i = 0, j, count = 0; 
	int tab[100];
	
	while (n > 10)
	{	
		tab[i] = n%10;
		n = n/10;
		count++;
		
	}
	for (j = count; j == 0; j--)
	{
	printf("%d",tab[j]);

	}

}