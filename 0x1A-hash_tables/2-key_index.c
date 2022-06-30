#include "hash_tables.h"
/**
 * key_index - get hashed index
 * @key:key to be hashed
 * @size: size of hash table
 * Return: index of key in the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
