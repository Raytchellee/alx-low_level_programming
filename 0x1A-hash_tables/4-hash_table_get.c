#include "hash_tables.h"

/**
 * hash_table_get - gets a key's value from hash table
 * @ht: input hash table
 * @key: input key
 * Return: key's value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (ht == NULL)
	{
		return (NULL);
	}
	idx = key_index((unsigned char *) key, ht->size);
	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}

	return (NULL);
}

