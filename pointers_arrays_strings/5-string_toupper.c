#include "main.h"
#include <stdio.h>

/**
 * string_toupper - print an array of integers
 * _putchar - writes the character c to stdout
 * @str: an array of integers
 *
 * Return: nothing.
 */
char *string_toupper(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			j = str[i];
			j -= 32;
			str[i] = j;
		}
	}
	return (str);
}
