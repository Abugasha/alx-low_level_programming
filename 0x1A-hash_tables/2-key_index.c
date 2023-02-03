#include "hash_tables.h"

/**
 * key_index - gets the index from a hash table
 * @key: String to refer to a value
 * @size: hash table size
 * Return: key_index in current array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index = 0;

	key_index = hash_djb2((unsigned char *)key) % size;
	return (key_index);
}

