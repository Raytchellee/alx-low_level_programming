#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: input string
 * Return: pointer
 */

char *_strdup(char *str)
{
	unsigned int idx = 0;
	char *s;

	if (str == 0)
		return (0);
	while (*(str + idx) != '\0')
	{
		idx++;
	}
	s = malloc((idx + 1) * sizeof(char));
	if (s == 0)
		return (0);
	while (idx--)
	{
		s[idx] = str[idx];
	}

	return (s);
}
