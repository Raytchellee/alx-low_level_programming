#include "main.h"

/**
 * swap_int - swaps two input values.
 * @a: input value.
 * @b: input value.
 * Return: none.
 */

void swap_int(int *a, int *b)
{
	int pointer = *a;
	*a = *b;
	*b = pointer;
}
