#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - print an array of output
 * _putchar - writes the character c to stdout
 * @s: char to plain
 * @accept: char to plain
 * Return: nothing.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, indice = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{

				s = s + i;
				break;
			}
		}
		if (s[i] == '\0')
			indice = -1;

		if (accept[j])
		{

			break;
		}
	}
	if (indice != 0)
		return (NULL);
	return (s);
}
