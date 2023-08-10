#include "hash_tables.h"

/**
  * key_index - Returns index of key
  * @key: input key
  * @size: hash size
  * Return: index of given key
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
