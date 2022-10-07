#include "main.h"
/**
 * _isdigit - function that print negative or positif check
 *
 * @c: variable input
 * Return:  1 or 0 is_upper.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (1);
	return (0);
}