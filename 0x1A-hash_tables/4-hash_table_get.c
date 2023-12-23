#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *temp;
    unsigned long int idx;

    idx = key_index((unsigned char *) key, ht->size);
    if (idx < ht->size)
    {
        temp = ht->array[idx];
    }
    if (temp == NULL || temp->value == NULL)
    {
        return (NULL);
    }
    
    return (temp->value);
}