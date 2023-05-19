#include "main.h"
#include <stdlib.h>

/**
 * _realloc - returns pointer
 * @old_size: input int
 * @new_size: input int
 * @ptr: input pointer
 * Return: memory array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
