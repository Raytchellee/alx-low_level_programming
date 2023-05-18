#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - allocates memory using malloc
 * @n: input int
 * @s1: input string
 * @s2: input string
 * Return: memory pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int idx = 0, idy = 0, len = 0, l1 = 0, l2 = 0;
	char *s;

	while (*(s1 + idx) != '\0')
		idx++;
	while (*(s2 + idy) != '\0')
		idy++;

	if (idy > n)
		idy = n;
	s = malloc((idx + idy + 1) * sizeof(char));
	if (!s)
		return (NULL);

	while (*(s1 + l1) != '\0')
	{
		*(s + len) = *(s1 + l1);
		l1++;
		len++;
	}
	while (*(s2 + l2) != '\0' && l2 < idy)
	{
		*(s + len) = *(s2 + l2);
		l2++;
		len++;
	}
	s[len] = '\0';

	return (s);
}
