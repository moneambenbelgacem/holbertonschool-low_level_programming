#include "hash_tables.h"
/**
 * hash_table_get - delete element by index
 * @ht: address node list
 * @key: key entry
 * Return: integer
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int add;

	if (ht == NULL || key == NULL)
		return (NULL);

	add = key_index((const unsigned char *)key, ht->size);
	while (ht->array[add])
	{
		if (ht->array[add] != NULL && (strcmp(ht->array[add]->key, key) == 0))
		{
			return (ht->array[add]->value);
		}
		ht->array[add] = ht->array[add]->next;
	}
	return (NULL);
}
