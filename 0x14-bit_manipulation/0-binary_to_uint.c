#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: binary string to convert
 * Return: unsigned integer
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int idx = 0, multiplier;

	if (!b)
		return (0);

	while (b[idx] != '\0')
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);
		idx++;
	}

	for (idx--, multiplier = 1; idx > -1; idx--, multiplier *= 2)
	{
		if (b[idx] == '1')
		{
			dec += multiplier;
		}
	}

	return (dec);
}
