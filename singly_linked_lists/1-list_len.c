#include "lists.h"
/**
 * list_len - check the code
 *@h: list entry point
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t i = 0;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

