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

	for (i = 0; i <= ht->size; i++)
	{
		next = ht->array[i];
		while (next)
		{
			ptr = next;
			next = next->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
	
}
