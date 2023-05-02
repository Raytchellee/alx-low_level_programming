#include "main.h"
#include <stdio.h>

/**
 * print_array - prints second half of a string.
 * @a: input array.
 * @n: input value.
 * Return: none
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
