#include "hash_tables.h"

/**
  * hash_table_create - function to create hash table
  * @size: input size
  * Return: new hashtable
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx = 0;
	hash_table_t *hash_new;

	if (size == 0)
		return (NULL);

	hash_new = malloc(sizeof(hash_table_t));
	if (hash_new == NULL)
		return (NULL);

	hash_new->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_new->array == NULL)
		return (NULL);
	hash_new->size = size;

	while (idx < size)
	{
		hash_new->array[idx] = NULL;
		idx++;
	}

	return (hash_new);
}
