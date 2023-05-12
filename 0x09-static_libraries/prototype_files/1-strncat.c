#include "main.h"

/**
 *_strncat - appends a string
 *@dest: input string
 *@src: input string
 *@n: input integer
 *Return: return concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length1, length2;

	length1 = length2 = 0;

	while (*(dest + length1) != '\0')
	{
		length1++;
	}
	while (length2 < n)
	{
		*(dest + length1) = *(src + length2);
		if (*(src + length2) == '\0')
		{
			break;
		}
		length1++;
		length2++;
	}

	return (dest);
}
