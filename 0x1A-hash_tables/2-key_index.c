#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key.
 * @key: key value being hashed
 * @size: the size of the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return index;
}
