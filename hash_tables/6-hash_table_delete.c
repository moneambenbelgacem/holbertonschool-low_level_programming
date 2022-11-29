#include "hash_tables.h"
/**
 * hash_table_delete - delete element by index
 * @ht: address node list
 * Return: integer
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr = NULL, *next = NULL;
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			next = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = next;
		}
	}
	free(ht->array);
	free(ht);
}