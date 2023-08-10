#include "hash_tables.h"

/**
 * hash_djb2 - function to implement djb2 algorithm
 * @str: sinput string
 * Return: value of hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int val;
	int idx;

	val = 5381;
	while ((idx = *str++))
	{
		val = ((val << 5) + val) + idx;
	}

	return (val);
}
