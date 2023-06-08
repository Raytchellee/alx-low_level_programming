#include "main.h"

/**
 * get_endianness - checks if endianness
 * Return: 1 if little, 0 otherwise
 */

int get_endianness(void)
{
	char *s;
	unsigned int idx;

	idx = 1;
	s = (char *) & idx;
	return ((int)*s);
}
