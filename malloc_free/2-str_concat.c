#include <string.h>
#include<string.h>
#include <stdlib.h>

/**
 * _strdup - function that print negative or positif check
 *@str: length of array
 *Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *chc = NULL; 
	unsigned int i  , j = 0,y,x =0  ;

	chc = malloc(sizeof(char) * (strlen(s1)+strlen(s2)+1));  
	if (!s1 || !s2)
	return (NULL);  

	for (i = 0; i < strlen(s1); i++)
	{
		*(chc +i) = *(s1 + j);  
		j++;
	}
		for (y = i; y < (strlen(s1)+strlen(s2)); y++)
		{

		*(chc +y) = *(s2 + x);
		x++;  
		
		}
		return (chc);




}