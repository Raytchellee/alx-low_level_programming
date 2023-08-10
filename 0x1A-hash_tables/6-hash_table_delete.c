#include "hash_tables.h"

/**
  * hash_table_delete - empties a hash table
  * @ht: input hash table
  * Return: None
  */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *temp;
	unsigned long int idx = 0;

	if (ht == NULL)
	{
		return;
	}

	while (idx < ht->size)
	{
		for (current = ht->array[idx]; current != NULL; current = temp)
		{
			temp = current->temp;
			free(current->key);
			free(current->value);
			free(current);
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
