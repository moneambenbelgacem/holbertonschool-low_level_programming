#include "lists.h"
/**
 * get_nodeint_at_index - check the code
 *@head: list entry point
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *hsol;
	unsigned int i = 0;

	hsol = head;

	while (hsol)
	{
		if (i == index)
			break;
		hsol = hsol->next;
		i++;
	}
	return (hsol);
}
