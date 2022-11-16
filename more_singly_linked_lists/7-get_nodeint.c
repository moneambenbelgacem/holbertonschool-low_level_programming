#include "lists.h"

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