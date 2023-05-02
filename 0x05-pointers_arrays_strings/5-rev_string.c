#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: none
 */

void rev_string(char *s)
{
	int left, length, hold;

	left = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	length--;

	while (left < length)
	{
		hold = s[length];
		s[length] = s[left];
		s[left] = hold;
		left++;
		length--;
	}
}
