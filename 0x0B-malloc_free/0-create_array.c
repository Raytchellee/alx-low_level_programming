#include "main.h"

/**
 * create_array - creates an array and initializes it with a specific char
 * @size: input integer
 * @c: input string
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int idx;
	char *s;

	if (size == 0)
	{
		return (0);
	}
	s = malloc(size * sizeof(char));
	if (s == 0)
	{
		return (0);
	}

	for (idx = 0; idx < size; idx++)
	{
		s[idx] = c;
	}

	return (s);
}
