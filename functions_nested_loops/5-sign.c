#include "main.h"
/**
 * print_sign - function that print negative or positif check
 *
 * @n: variable input
 * Return:  0 or 1.
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar(48);
return (0);

}
else
{
putchar('-');

return (-1);
}

}
