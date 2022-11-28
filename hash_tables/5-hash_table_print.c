#include "hash_tables.h"
/**
 * print_element - delete element by index
 * @hn: address node list
 * @j: address node list
 * Return: integer
 */
void print_element(hash_node_t *hn, unsigned int j)
{
	if (j != 0)
		printf(", ");
	printf("'%s':", hn->key);
	printf(" '%s'", hn->value);
	if (hn->next)
		print_element(hn->next, j++);
}
/**
 * hash_table_print - delete element by index
 * @ht: address node list
 * Return: integer
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, j = 0;

	if (ht != NULL)
	{

		putchar('{');
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
				print_element(ht->array[i], j++);
		}
		putchar('}');
		putchar('\n');
	}
}
