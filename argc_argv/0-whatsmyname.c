#include <stdio.h>
/**
 * main - for print your name of your exucutable program
 *@argc: input for number arguments
 *@argv: input for array arguments
 * Return:  1 or 0 is_upper.
 */
int main(int argc, char *argv[])
{
	if (argc != 0)
		printf("%s\n", argv[0]);

	return (0);
}
