#include "hash_tables.h"
/**
 * hash_table_set - delete element by index
 * @ht: address node list
 * @key: key entry
 * @value: value entry
 * Return: integer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int add;
	hash_node_t *new = NULL;

	if (ht == NULL || key == NULL)
		return (0);

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
	}
	else
	{
		if (strcmp(ht->array[add]->key, key) == 0)
		{
			free(ht->array[add]->value);
			ht->array[add]->value = strdup(value);
		}
		else
		{

			new->next = ht->array[add];
			ht->array[add] = new;
		}
	}
	return (1);
}
