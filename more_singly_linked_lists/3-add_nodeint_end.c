#include "lists.h"
/**
 * add_nodeint_end - check the code
 *@head: list entry point
 *@n: list entry point
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *c;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head)
	{
		c = *head;
		while (c->next != NULL)
			c = c->next;
		c->next = new;
	}
	else
		*head = new;
	return (new);
}
