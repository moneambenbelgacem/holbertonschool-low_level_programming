#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point for function
 * @argc: arg counter, number of args
 * @argv: array of pointers to args
 *
 * Description: calculates basic arithmetic
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char op;
	int (*calc_func)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	op = *(argv[2]) ;
	if ((op == '/' || op == '%') && !atoi(argv[3]))
	{
		printf("Error\n");
		return (100);
	}
	calc_func = get_op_func(&op);
	if (calc_func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	result = calc_func(atoi(argv[1]),atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}