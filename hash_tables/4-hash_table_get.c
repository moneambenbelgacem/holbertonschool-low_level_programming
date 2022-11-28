#include "hash_tables.h"
/**
 * hash_table_set - delete element by index
 * @ht: address node list
 * @key: key entry
 * @value: value entry
 * Return: integer
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int add; 

add = key_index((const unsigned char *)key, ht->size);
if(ht->array[add] != NULL && (strcmp(ht->array[add]->key,key) == 0))
{
	return(ht->array[add]->value);
}
return(NULL);
}