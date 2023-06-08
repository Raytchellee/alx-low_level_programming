#include "main.h"

/**
 * get_bit - returns value of bit at index
 * @n: unsigned long int
 * @index: index of bit
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx;

	if (index < 64 && n == 0)
		return (0);

	for (idx = 0; idx < 64; n >>= 1, idx++)
	{
		if (idx == index)
		{
			return (n & 1);
		}
	}

	return (-1);
}
