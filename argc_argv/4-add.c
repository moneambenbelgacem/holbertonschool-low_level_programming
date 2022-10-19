#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - for print your name of your exucutable program
 *@argc: input for number arguments
 *@argv: input for array arguments
 * Return:  1 or 0 is_upper.
 */
int main(int argc, char *argv[])
{
	int i, j, mul = 0;

	if (argc < 3)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] > '9' || argv[i][j] < '0')
				{
					printf("Error\n");
					return (1);
				}
			}

			mul += atoi(argv[i]);
		}
		printf("%d\n", mul);
	}

	return (0);
}

