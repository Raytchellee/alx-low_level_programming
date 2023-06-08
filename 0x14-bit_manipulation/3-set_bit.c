#include "main.h"

/**
 * set_bit - sets value of bit at index
 * @n: unsigned long int
 * @index: index of bit
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int idx;

	if (index >= 64)
	{
		return (-1);
	}

	idx = 1 << index;

	*n = (idx | *n);

	return (1);
}
