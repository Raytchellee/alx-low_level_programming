#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: input string
 *@s2: input string
 *Return: return integer
 */

int _strcmp(char *s1, char *s2)
{
	int idx = 0, difference = 0;

	while ((*(s1 + idx) != '\0') && (*(s2 + idx) != '\0'))
	{
		difference = *(s1 + idx) - *(s2 + idx);
		idx++;
	}

	return (difference);
}
