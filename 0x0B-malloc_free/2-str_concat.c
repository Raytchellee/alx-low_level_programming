#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input string
 * @s2: input string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int idx = 0, idy = 0, idz;
	char *s;

	if (s1 != NULL)
	{
		while (*(s1 + idx) != '\0')
		{
			idx++;
		}
	}
	if (s2 != NULL)
	{
		while (*(s2 + idy) != '\0')
		{
			idy++;
		}
	}
	s = malloc((idx + idy + 1) * sizeof(char));
	idz = idx + idy;
	if (s == 0)
		return (0);
	s[idz] = '\0';
	idz--;

	while (idy--)
	{
		s[idz] = s2[idy];
		idz--;
	}
	while (idx--)
	{
		s[idz] = s1[idx];
		idz--;
	}

	return (s);
}
