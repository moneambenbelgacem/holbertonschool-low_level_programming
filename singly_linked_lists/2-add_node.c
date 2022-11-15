#include "lists.h"
/**
 * add_node - check the code
 *@head: list entry point
 *@str: list entry point
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
