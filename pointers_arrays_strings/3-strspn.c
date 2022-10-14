#include "main.h"
#include <stdio.h>
/**
 * _strspn - print an array of integers
 * _putchar - writes the character c to stdout
 * @s: char to plain
 * @accept: char to plain
 * Return: nothing.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (!accept[j])
		{

			break;
		}
		else
		{
			j = 0;
		}
	}

	return (i);
}
