#include "hash_tables.h"
/**
 * add_node - check the code
 *@head: list entry point
 *@str: list entry point
 * Return: Always 0.
 */
hash_node_t *add_node(hash_node_t**head)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	
	new->next = *head;
	*head = new;

	return (new);
}
