#include "main.h"
#include <string.h>
/**
 * _strdup - function that print negative or positif check
 *@str: length of array
 *Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *chp = NULL;
	int i = 0, j = 0, len = 0;

	if (!str)
		return (NULL);
	len = strlen(str);

	chp = malloc(sizeof(char) * len + 1);

	if (!chp)
		return (NULL);

	while (i <= len)
	{
		*(chp + j) = *(str + i);
		i++;
		j++;
	}

	return (chp);
}
