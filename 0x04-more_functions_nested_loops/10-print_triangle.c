#include "main.h"

/**
 *print_triangle - prints square lines
 *@size: input value
 */

void print_triangle(int size)
{
	int idx, idy;

	for (idx = 0; idx < size; idx++)
	{
		for (idy = 0; idy < size; idy++)
		if (idy >= size - idx - 1)
		{
			_putchar('#');
		}
		else
		{
			_putchar(' ');
		}
		if (idx != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
