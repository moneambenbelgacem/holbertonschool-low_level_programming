#include "lists.h"
/**
 * add_dnodeint - check the code
 *@head: input list
 *@n: input int
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *emchi, *emchi_wrah, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	emchi = (*(h))->next;
	emchi_wrah = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		while (emchi->next != NULL)
		{
			if (!emchi)
				return (NULL);
			if (i == idx - 1)
			{
				new->n = n;
				new->prev = emchi_wrah;
				new->next = emchi;
				emchi_wrah->next = new;
				emchi->prev = new;
				return (*h);
			}
			else
			{
				emchi = emchi->next;
				emchi_wrah = emchi_wrah->next;
				i++;
			}
		}
		return (add_dnodeint_end(h, n));
	}
	return (new);
}