#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char charType;
        int intType;
        long int floatType;
        long long int doubleType;
        float floa;

        printf("Size of char: %zu byte(s)\n", sizeof(charType));
        printf("Size of int: %zu byte(s)\n", sizeof(intType));
        printf("Size of a long int: %ld byte(s)\n", sizeof(floatType));
        printf("Size of a long long int: %d byte(s)\n", sizeof(doubleType));
        printf("Size of float: %zu bytes\n", sizeof(floa));
        return (0);
}
