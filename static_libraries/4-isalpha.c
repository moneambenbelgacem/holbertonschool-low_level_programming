#include "main.h"
#include <ctype.h>
/**
 * _isalpha - function that print alpha check
 *
 * @c: variable input
 * Return:  0 or 1.
 */
int _isalpha(int c)
{
if (isalpha(c) == 0)
return (0);

return (1);
}
