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
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_node = malloc(sizeof(hash_node_t));
			if (new_node == NULL)
				return (0);

			new_node->key = (char *) key;
			new_node->value = (char *) value;
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (1);
		}
		tmp = tmp->next;
	}

	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *) key;
	new_node->value = (char *) value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
