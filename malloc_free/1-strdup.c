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
	int i = 0, j = 0,len = 0;


	if (!str)
		return (NULL);
	 len = strlen(str);

	chp = malloc(sizeof(char) * len +1);

	while (i <= len)
	{
		*(chp + j) = *(str + i);
		i++;
		j++;
	}

	return (chp);
}