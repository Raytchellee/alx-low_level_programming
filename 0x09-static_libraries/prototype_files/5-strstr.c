#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to check
 * @needle: string to check.
 * Return: the pointer to haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1;
	char *str2;

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*str2 != '\0' && *str1 != '\0' && *str2 == *str1)
		{
			str1++;
			str2++;
		}
		if (*str2 == '\0')
			return (haystack);
		haystack = haystack + 1;
	}

	return ('\0');
}
