#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: none
 */

void rev_string(char *s)
{
	int left, length;
	char hold, *str;

	left = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	length--;
	str = s;

	while (left < length)
	{
		hold = *(str + length);
		*(str + length) = *(s + left);
		*(s + left) = hold;
		left++;
		length--;
	}
}
