#include "function_pointers.h"
/**
 * print_name - Entry point
 *
 * @name: string
 * @f: function
 *
 * Description: 'print name.'
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array != NULL) && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

