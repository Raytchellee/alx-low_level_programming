
#include "main.h"

/**
 *print_square - prints square lines
 *@size: input value
 */

void print_square(int size)
{
	int idx, idy;

	for (idx = 0; idx < size; idx++)
	{
		for (idy = 0; idy < size; idy++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
