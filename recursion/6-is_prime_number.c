#include "main.h"
/**
 * check_prime_number - to check if prime or not
 *@n: value input
 *@i: value input
 * Return: 1 on success or 0 on fail.
 */
int check_prime_number(int x, int y)
{

	if (x == 1)

		return (0);
	if (y == x)
		return (1);
	if (y > x)
		return (0);
	if (x % y == 0)
		return (0);

	return (check_prime_number(x, y + 1));
}
/**
 * is_prime_number - prime number function
 *@n: value input
 * Return: 1 on success or 0 on fail.
 */
int is_prime_number(int n)
{

	return (check_prime_number(n, 2));
}
