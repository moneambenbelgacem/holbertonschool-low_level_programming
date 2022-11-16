#include "lists.h"
/**
 * get_nodeint_at_index - check the code
 *@head: list entry  point
 *@index: list entry point
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *hsol, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	hsol = *head;
	if (idx == 0)
	{
		new->next = *head;
		(*(head))->next = new;
	}

	while (hsol)
	{
		if (i == idx)
			break;
		hsol = hsol->next;
		i++;
	}
	new->next = hsol->next;
	hsol->next = new;

	return (*head);
}
