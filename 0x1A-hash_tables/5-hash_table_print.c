#include "hash_tables.h"

/**
 * hash_table_print - prints everything in the hash table
 * @ht: input hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int idx, count;

	if (ht == NULL)
	{
		return;
	}

	idx = count = 0;

	printf("{");

	while (idx < ht->size)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			count++;
			temp = temp->next;
		}
		idx++;
	}

	printf("}\n");
}
