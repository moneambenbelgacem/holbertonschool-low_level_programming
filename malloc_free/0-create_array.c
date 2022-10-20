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
	char *mytab = NULL;
	unsigned int i;
mytab = malloc(sizeof(*mytab) * size); 
	if (size == 0)
		return (NULL);

	if (!mytab)
	return(NULL);

	for (i = 0; i < size; i++)
	{
		*(mytab +i) = c;
	}
	return (mytab);

}