#include "main.h"
#include <stdio.h>

/**
 * rev_string - update the value of n
 *@s: value input
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int l, i;

	char *debut, *fin, ch;

	l = strlen(s);
	debut = s;
	fin = s;

	for (i = 0; i < l - 1; i++)
		fin++;

	for (i = 0; i < l / 2; i++)
	{
		ch = *fin;
		*fin = *debut;
		*debut = ch;

		debut++;
		fin--;
	}
}
