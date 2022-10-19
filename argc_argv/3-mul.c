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
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{

			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}

	return (0);
}
