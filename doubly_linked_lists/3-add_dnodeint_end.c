#include "lists.h"
/**
 * add_dnodeint_end - check the code
 *@head: input list
 *@n: input int
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{

		while (ptr->next)
		{

			ptr = ptr->next;
		}
		ptr->next = new;
		new->prev = ptr;

		return (new);
	}
}
