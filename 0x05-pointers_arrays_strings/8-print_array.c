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

	i = 0;

	printf("%d", a[i]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	_putchar('\n');
}
