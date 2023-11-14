#include "search_algos.h"

/**
 * linear_search - finds a value in an array linear
 * @array: array to search
 * @size: length of array
 * @value: input value to check for
 * Return: values or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!array)
		return (-1);
	while (idx < size)
	{
		printf("Value checked array[%ld] = [%d]", idx, array[idx]);
		if (array[idx] == value)
		{
			return (value);
		}
		idx++;
	}
	return (-1);
}
