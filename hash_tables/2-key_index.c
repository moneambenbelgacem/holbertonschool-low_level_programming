#include "hash_tables.h"
/**
 * key_index - implementation of the djb2 algorithm
 * @size: string used to generate hash value
 * @key: string used to generate hash value
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int res;

	res = hash_djb2((const unsigned char*)key) % size;
	return (res);
}
