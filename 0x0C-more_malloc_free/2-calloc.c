#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates array memory using malloc
 * @nmemb: input int
 * @size: input size
 * Return: memory pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int idx;
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * nmemb * sizeof(int));
	if (s == NULL)
		return (NULL);

	for (idx = 0; idx < nmemb * size; idx++)
	{
		s[idx] = 0;
	}

	return (s);
}
