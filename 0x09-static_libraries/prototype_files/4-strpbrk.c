#include "main.h"
/**
 * _strpbrk- searches a string for any of a set of bytes
 * @accept: string to check
 * @s: string to check.
 * Return: the pointer to c
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int idx, idy;

	for (idx = 0; *(s + idx) != '\0'; idx++)
	{
		for (idy = 0; *(accept + idy) != '\0'; idy++)
		{
			if (*(s + idx) == *(accept + idy))
			{
				return (s + idx);
			}
		}
	}

	return ('\0');
}
