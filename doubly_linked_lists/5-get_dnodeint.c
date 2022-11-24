#include "lists.h"
/**
 * get_dnodeint_at_index - check the code
 *@head: input list
 *@index: input list
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *hsol;
	unsigned int i = 1;
	int state = 0;

	hsol = head;

	if (index == 0)
		return (hsol);
	while (hsol)
	{
		hsol = hsol->next;
		i++;
		if (i == index)
		{
			state = 1;
			break;
		}
	}
	if (state == 0)
	{
		return (NULL);
	}
	else
	{
		return (hsol);
	}
}