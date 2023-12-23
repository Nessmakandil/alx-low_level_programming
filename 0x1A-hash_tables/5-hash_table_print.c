#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *node;

    printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			while (node != NULL)
			{
                if (count > 0)
					printf(", ");
				printf("\'%s\': \'%s\'", node->key, node->value);
                node = node->next;
                count++;
			}
	}
        
	}
    printf("}\n");
}