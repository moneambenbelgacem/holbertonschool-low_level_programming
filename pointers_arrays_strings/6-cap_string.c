#include "main.h"
#include <stdio.h>

/**
 * cap_string - print an array of integers
 * _putchar - writes  the character c to stdout
 * @s: an array of integers
 *
 * Return: nothing.
 */
char *cap_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[0] >= 'a') && (s[0] <= 'z'))
		{
			j = s[0];
			j -= 32;
			s[0] = j;
		}

		if ((s[i] == '\t') || (s[i] == '\n') || (s[i] == ' ') || (s[i] == ',') ||
			(s[i] == ';') || (s[i] == '.') || (s[i] == '!') || (s[i] == '?') ||
			(s[i] == '"') || (s[i] == '(') || (s[i] == ')') || (s[i] == '{') ||
			(s[i] == '}'))
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
