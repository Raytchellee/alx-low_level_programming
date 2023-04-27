#include "main.h"

/**
 * print_number - prints integers.
 * @n: input integer.
 */

void print_number(int n)
{
	int x, fixedValue, tens;

	tens = 1;
	if (n < 0)
	{
		_putchar('-');
		x = -1 * n;
	}
	else
	{
		x = n;
	}
	fixedValue = x;

	while (x > 9)
	{
		x /= 10;
		tens *= 10;
	}
	x = fixedValue;

	while (tens >= 1)
	{
		_putchar(((x / tens) % 10) + 48);
		tens /= 10;
	}
}
