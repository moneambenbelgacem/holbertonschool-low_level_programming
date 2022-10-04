#include "main.h"
/**
 * print_alphabet - function that print lowercase
 *
 */
void print_alphabet(void)
{
    int c;
    for (c = 97; c <= 122; c++)
    {
        _putchar(c);
    }
    _putchar('\n');
}