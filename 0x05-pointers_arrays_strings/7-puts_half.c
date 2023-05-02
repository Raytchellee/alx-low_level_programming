#include "main.h"

/**
 * puts_half - prints second half of a string.
 * @str: input string.
 * Return: none
 */

void puts_half(char *str)
{
	int length = 0, half, i;

	while (*(str + length) != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length / 2) + 1;
	}
	for (i = half; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
