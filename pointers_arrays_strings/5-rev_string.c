#include "main.h"
#include <stdio.h>

/**
 * rev_string - update the value of n
 *@s: value input
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int j, i = 0;
	int length = strlen(s) - 1;
	char aux;

	j = length;
	do {
		aux = s[i];
		s[i] = s[j];
		s[j] = aux;

	} while ((j <= length / 2) && (i <= length / 2));
	printf("%s", s);
}
