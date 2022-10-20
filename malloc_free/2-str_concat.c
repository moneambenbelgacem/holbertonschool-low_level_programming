#include <string.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function that print negative or positif check
 *@s1: length of array
 *@s2: length of array
 *Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *chc = NULL;
	unsigned int i, j = 0, y, x = 0;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	chc = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (chc == 0)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		*(chc + i) = *(s1 + j);
		j++;
	}
	for (y = i; y < (strlen(s1) + strlen(s2)); y++)
	{

		*(chc + y) = *(s2 + x);
		x++;
	}
	return (chc);
}
