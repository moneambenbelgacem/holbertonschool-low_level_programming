#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	long int floatType;
	long long int doubleType;
	char charType;

	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(floatType));
	printf("Size of a long long int: %ll byte(s)\n", sizeof(doubleType));
	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	return (0);
}
