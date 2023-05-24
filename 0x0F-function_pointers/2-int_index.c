#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input array.
 * @size: array size.
 * @cmp: compare function.
 * Return: index.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (idx = 0; idx < size; idx++)
		{
			if (cmp(array[idx]))
			{
				return (idx);
			}
		}
	}

	return (-1);
}
