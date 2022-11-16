#include "lists.h"
/**
 * insert_nodeint_at_index - check the code
 *@head: list entry  point
 *@idx: list entry point
 *@n: list entry point
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *hsol, *new;
	unsigned int i = 0;
	if (i < idx && *head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	hsol = *head;

	while (i < (idx - 1))
	{
		if (!hsol)
		{
			return (NULL);
		}
		hsol = hsol->next;
		i++;
	}
	new->n = n;
	new->next = hsol->next;
	hsol->next = new;

	return (new);
}
