#include "main.h"
/**
 * wildcmp - checks if two wild cards are identical
 * @s1: first input string
 * @s2: second input string
 * Return: 1 if true 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	else if (*s2 == *s1)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		if (*s2 == '*')
		{
			if (*(s2 + 1) == '*')
				return (wildcmp(s1, s2 + 1));
			else if (*(s2 + 1) != '*' && *(s2 + 1) != '\0' && *s1 == '\0')
				return (0);
			else
				return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
		else
			return (0);
	}
}
