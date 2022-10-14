#include "main.h"
#include <stdio.h>
/**
 * _strstr - print an array of integers
 * _putchar - writes the character c to stdout
 * @a: char to plain
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
