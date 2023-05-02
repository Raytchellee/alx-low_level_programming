#include "main.h"

/**
 * _puts - prints a string.
 * @str: input string.
 * Return: none
 */

void _puts(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
