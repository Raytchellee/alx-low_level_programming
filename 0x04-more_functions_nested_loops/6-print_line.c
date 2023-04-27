#include "main.h"

/**
 *print_line - prints a line
 *@n: input value
 */

void print_line(int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
