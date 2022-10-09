#include "main.h"
#include<stdio.h>
/**
 * print_number - function that print negative or positif check
 * _putchar - writes  the character c to stdout
 * @n: input for print_#
 *Return: Always 0 (Success)
 */
void print_number(int n)
{
	char my_num[20];
	sprintf(my_num, "%d",n);
	printf("%s",my_num);
	printf("\n");

}