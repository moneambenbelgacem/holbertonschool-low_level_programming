#include "lists.h"
/**
 * dlistint_len - check the code
 *@h: input list
 * Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t i = 0;

	ptr = h;
	while (ptr != NULL)
	{
		
		ptr = ptr->next;
		i++;
	}

	return (i);
}
