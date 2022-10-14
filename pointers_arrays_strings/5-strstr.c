#include "main.h"
#include <stdio.h>
/**
 * _strstr - print an array of integers
 * _putchar - writes the character c to stdout
 * @haystack: char to plain
 * @needle: char to plain
 * Return: nothing.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[i] == needle[0]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
		{
			return (haystack + i);
		}
		else
		{
			j = 0;
		}
	}
	return (NULL);
}
