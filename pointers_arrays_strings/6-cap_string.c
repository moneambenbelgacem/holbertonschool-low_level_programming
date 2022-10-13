#include "main.h"
#include <stdio.h>

/**
 * string_toupper - print an array of integers
 * _putchar - writes the character c to stdout
 * @str: an array of integers
 *
 * Return: nothing.
 */
char *cap_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\t')
			s[i] = ' ';

		if ((s[i] == '\n') || (s[i] == ' ') || (s[i] == ',') || (s[i] == ';') || (s[i] == '.') || (s[i] == '!') || (s[i] == '?') || (s[i] == '"') || (s[i] == '(') || (s[i] == ')') || (s[i] == '{') || (s[i] == '}'))
		{
			if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
			{

				j = s[i + 1];
				j -= 32;
				s[i + 1] = j;
			}
		}
	}
	return (s);
}