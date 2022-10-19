#include <stdio.h>
/**
 * main - for print your name of your exucutable program
 *@argc: input for number arguments
 *@argv: input for array arguments
 * Return:  1 or 0 is_upper.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
