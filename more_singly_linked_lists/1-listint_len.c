#include "lists.h"
/**
 * listint_len - check the code
 *@h: list entry point
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t i = 0;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

