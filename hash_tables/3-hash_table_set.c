#include "hash_tables.h"
/**
 * hash_table_create - delete element by index
 * @size: address node list
 * Return: integer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int add;
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	add = key_index((const unsigned char *)key, ht->size);
	if (ht->array[add] == 0)
	{
		ht->array[add] = new;
		return (1);
	}
	return (0);
}
