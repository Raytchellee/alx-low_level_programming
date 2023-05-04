#include "main.h"

/**
 *_strcat - appends a string
 *@dest: input string
 *@src: input string
 *Return: return concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int length1, length2;

	while (*(dest + length1) != '\0')
	{
		length1++;
	}
	while (*(src + length2) != '\0')
	{
		*(dest + length1) = *(src + length2);
		length1++;
		length2++;
	}
	*(dest + length1) = *(src + length2);

	return (dest);
}
