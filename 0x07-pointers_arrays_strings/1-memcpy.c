#include "main.h"
/**
 * _memcpy - copies values from src to dest,
 * @src: source space
 * @dest: destination space.
 * @n: number of bytes.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		*(src + idx) =  *(dest + idx);

	return (dest);
}
