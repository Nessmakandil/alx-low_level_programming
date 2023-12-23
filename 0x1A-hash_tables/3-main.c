#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

void print_table(hash_table_t *table)
{
    unsigned long int i;

    printf("\nHash Table\n-------------------\n");

    for (i = 0; i < table -> size; i++)
    {
        if (table -> array[i])
        {
            printf("Index:%lu, Key:%s, Value:%s\n", i, table -> array[i] -> key, table -> array[i] -> value);
        }
    }

    printf("-------------------\n\n");
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
    print_table(ht);
    return (EXIT_SUCCESS);
}