#include "main.h"

/**
 *print_diagonal - prints diagonal lines
 *@n: input value
 */

void print_diagonal(int n)
{
	int idx, idy;

	for (idx = 0; idx < n; idx++)
	{
		for (idy = 0; idy < idx; idy++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
