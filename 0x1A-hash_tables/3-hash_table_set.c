#include "hash_tables.h"

/**
 * hash_table_set - create item in the table
 * @ht: created table
 * @key: string used to create the index
 * @value: value to be stored
 * Return: item set correctly (1) or not (0)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_item = (hash_node_t *) malloc(sizeof(hash_node_t));

	new_item->key = (char *) key;
	new_item->value = (char *) value;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_item;
	}
	if (ht->array[index] != NULL)
	{
		new_item->next = *(ht->array);
		*(ht->array) = new_item;
	}
	if (ht->array[index])
	{
		return (1);
	}
	return (0);
}
