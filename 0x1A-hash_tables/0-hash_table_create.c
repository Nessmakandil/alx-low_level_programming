#include "hash_tables.h"

/**
 * hash_table_create - create table
 * @size: the size of the array
 * Return: table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));
    if (table == NULL)
    {
        return (NULL);
    }
    table->size = size;
    return (table);
}