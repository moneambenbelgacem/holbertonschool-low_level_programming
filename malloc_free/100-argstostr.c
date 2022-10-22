#include "main.h"
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, x = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	len += ac;

	ptr = malloc(sizeof(char) * len + 1);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[x] = av[i][j];
			x++;
		}
		if (ptr[x] == '\0')
			ptr[x++] = '\n';
	}
	return (ptr);
}
