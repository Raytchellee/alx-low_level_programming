#include "main.h"

/**
 *string_toupper - convert a string to upper case
 *@s: input string
 *Return: string in uppercase
 */

char *string_toupper(char *s)
{
	int idx = 0;

	while (s[idx] != '\0')
	{
		if (s[idx] > 96 && s[idx] < 123)
		{
			s[idx] = s[idx] - 32;
		}
		idx++;
	}

	return (s);
}
