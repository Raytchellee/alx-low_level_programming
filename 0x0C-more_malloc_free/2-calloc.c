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
	unsigned int len;
	void *s;
	char *t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * nmemb);
	if (!s)
		return (NULL);

	len = nmemb * size;
	t = s;

	do {
		*t++ = 0;
	} while (--len);

	return (s);
}
