#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function that print negative or positif check
 * _putchar - writes the character c to stdout
 *Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *mytab ;
	unsigned int i;

	if (size == 0)
		return (NULL);

	mytab = malloc(sizeof(unsigned int) * size);

	for (i = 0; i < size; i++)
	{
		*(mytab +i) = c;
	}
	return (mytab);
}