#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/* Function to calculate the index for a given key */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *key++))
		hash = ((hash << 5) + hash) + c;

	return (hash % size);
}

/* Function to create a hash table */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

/* Function to delete a hash table */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			/* Handle collision by adding new node at the beginning */
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/* Function to print the hash table */
void print_hash_table(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			printf("[%lu]: ", i);
			while (node != NULL)
			{
				printf("(%s: %s) ", node->key, node->value);
				node = node->next;
			}
			printf("\n");
		}
	}
}

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024); 
	hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "cool");
    hash_table_set(ht, "mentioner", "cool");
    hash_table_set(ht, "heliotropes", "cool");
    hash_table_set(ht, "neurospora", "cool");
    print_hash_table(ht);

	hash_table_delete(ht);
	return (0);
}