#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: input string
 *@src: input string
 *@n: number of bytes to add
 *Return: return concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx = 0;

	for (; idx < n; idx++)
	{
		if (*(src + idx) == '\n')
			break;
		*(dest + idx) = *(src + idx);
	}
	for (; idx < n; idx++)
	{
		*(dest + idx) = '\0';
	}

	return (dest);
}
