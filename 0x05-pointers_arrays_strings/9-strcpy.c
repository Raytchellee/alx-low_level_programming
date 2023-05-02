#include "main.h"

/**
 * _strcpy - copies a string.
 * @dest: destination string.
 * @src: source string.
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int length;

	length = 0;

	while (*(src + length) != '\0')
	{
		*(dest + length) = *(src + length);
	}
	*(dest + length) = *(src + length);
	return (dest);
}
