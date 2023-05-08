#include "main.h"
/**
 * _strchr - returns pointer to number index,
 * @c: char to check
 * @s: string to check.
 * Return: the pointer to c
 */
char *_strchr(char *s, char c)
{
	unsigned int idx;

	for (idx = 0; *(s + idx) != '\0'; idx++)
	{
		if (*(s + idx) ==  c)
		{
			return (*(s + idx));
		}
	}
	if (*(s + idx) ==  c)
	{
		return (*(s + idx));
	}
	return ('\0');
}
