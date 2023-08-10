#include "hash_tables.h"

/**
  * hash_table_set - adds given value to the hash table
  * @ht: input hash table
  * @key: key to add
  * @value: value of key
  * Return: 1 if successful, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current = NULL, *nnode = NULL;
	unsigned long int idx = 0;

	if (key == NULL || *key == 0 || value == NULL || ht == NULL)
	{
		return (0);
	}
	idx = key_index((unsigned char *) key, ht->size);
	current = ht->array[idx];

	if (current && strcmp(key, current->key) == 0)
	{
		free(current->value);
		current->value = strdup(value);
		return (1);
	}

	nnode = malloc(sizeof(hash_node_t));
	if (nnode == NULL)
	{
		return (0);
	}
	nnode->key = strdup(key);
	nnode->value = strdup(value);
	nnode->next = ht->array[idx];
	ht->array[idx] = nnode;

	return (1);
}
