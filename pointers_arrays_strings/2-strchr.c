#include "main.h"
#include <stdio.h>
/**
 * _strchr - print an array of integers
 * _putchar - writes the character c to stdout
 * @s: char to plain
 * @c: char to plain
 * Return: nothing.
 */
char *_strchr(char *s, char c)
{

	int len, i = 0, pos = 0;

	len = strlen(s);
	while (i <= len)
	{
		if (s[i] == c)
		{

			s = s + i;
			pos = i;
			break;
		}
		else
		{
			i++;
		}
	}
	if (pos == 0)
		return (NULL);
	return (s);
}
