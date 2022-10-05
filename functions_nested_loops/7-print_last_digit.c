#include "main.h"
/**
 * print_last_digit - function that print negative or positif check
 *
 * @a: variable input
 * Return:  abs of input.
 */
int print_last_digit(int a)
{
int res = a % 10;
if (res < 0)
return (-res);
_putchar('0' + res);
return (res);
}
