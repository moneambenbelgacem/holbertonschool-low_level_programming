#include "main.h"
#include <stdio.h>


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "First, solve the problem. Then, write the code.";
	char *f;

	f = _strchr(s, ',');
	printf("%s\n", (f == NULL ? "nil" : f));
	return (0);
}