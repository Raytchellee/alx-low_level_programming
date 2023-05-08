#include "main.h"
/**
 * _strspn - returns pointer to number index,
 * @accept: string to check
 * @s: string to check.
 * Return: the pointer to c
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int idx, idy;

	for (idx = 0; *(s + idx) != '\0'; idx++)
	{
		for (idy = 0; *(accept + idy) != '\0'; idy++)
		{
			if (*(s + idx) == *(accept + idy))
			{
				break;
			}
		}
		if (*(accept + idy) ==  '\0')
		{
			break;
		}
	}

	return (idx);
}
