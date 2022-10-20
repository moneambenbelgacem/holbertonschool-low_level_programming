#include "main.h"
#include <string.h>
/**
 * create_array - function that print negative or positif check
 *@size: length of array
 *@c: input char
 *Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *chp = NULL ;
	int i = 0, j = 0, len = strlen(str) ;

	if (!str)
		return (NULL);

	chp = malloc(sizeof(char) * len);

	while (i < len)
	{
		*(chp + j) = *(str + i);
		i++;
		j++;
	}

	return (chp);
}