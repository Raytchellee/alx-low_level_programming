#include "main.h"

/**
 * clear_bit - sets value of bit at index to 0
 * @n: unsigned long int
 * @index: index of bit
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int idx;

	if (index >= 64)
	{
		return (-1);
	}

	idx = 1 << index;

	if (*n & idx)
	{
		*n ^= idx;
	}

	return (1);
}
