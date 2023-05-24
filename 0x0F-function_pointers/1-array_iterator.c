#include "function_pointers.h"

/**
 * array_iterator - iterates array and executes action on each index
 * @array: input array.
 * @size: array size.
 * @action: function pointer.
 * Return: none.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int idx;

	if (size && action)
	{
		for (idx = 0; idx < size; idx++)
		{
			action(array[idx]);
		}
	}
}
