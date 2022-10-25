#include "main.h"
/**
 * string_nconcat - function to calculate number of words
 *@s1: string being passed to check for words
 *@s2: string being passed to check for words
 *@
 * Return: number of words
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len, i = 0, x = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = strlen(s1) + n;

	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		*(ptr + x) = *s1;
		s1++;
		x++;
	}
	while ((*s2 != '\0') && (i <= n))
	{
		*(ptr + x) = *s2;
		s2++;
		x++;
		i++;
	}
	*(ptr + x) = '\0';

	return (ptr);
}