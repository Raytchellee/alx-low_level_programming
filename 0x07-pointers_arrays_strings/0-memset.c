#include "main.h"
/**
 * _memset - sets n memories with byte,
 * @s: available space
 * @b: input value to add.
 * @n: number of bytes.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx;

	for (idx = 0; idx < n; idx++)
		*(s + idx) =  b;

	return (s);
}
