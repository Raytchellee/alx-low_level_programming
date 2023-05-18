#include "main.h"
#include <stdlib.h>

/**
 * array_range - returns array of range min to max
 * @min: minimum int
 * @max: maximum int
 * Return: memory array
 */

int *array_range(int min, int max)
{
	int *s;
	int len;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * (max - min + 1));
	if (!s)
		return (NULL);

	len = max - min;
	while (max >= min)
	{
		s[len] = max;
		len--;
		max--;
	}

	return (s);
}
