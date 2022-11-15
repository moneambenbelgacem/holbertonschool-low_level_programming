#include "lists.h"
/**
 * add_node_end - check the code
 *@head: list entry point
 *@str: list entry point
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *c;

	new = malloc(sizeof(list_t));
	if ((new == NULL) || (str == NULL))
		return (NULL);

	new->len = strlen(str);
	new->str = strdup(str);
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
