#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: none
 */

void rev_string(char *s)
{
	int length, left;
	char hold;

	length = 0;
	left = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	length--;

	while (left < length)
	{
		hold = *(s + left);
		*(s + left) = *(s + length);
		*(s + length) = hold;
		left++;
		length--;
	}
}
