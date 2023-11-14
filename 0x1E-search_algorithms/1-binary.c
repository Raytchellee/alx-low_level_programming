#include "search_algos.h"
#include <math.h>

/**
 * helper - finds a value in an array binary
 * @array: array to search
 * @left: left pointer
 * @right: right pointer
 * @value: input value to check for
 * Return: values or -1
 */

int helper(int *array, size_t left, size_t right, int value)
{
	size_t mid, idx = left, idy = right;

	if (left > right)
		return (-1);
	mid = floor((left + right) / 2);
	printf("Searching in array: ");
	while (idx <= idy)
	{
		if (idx == idy)
			printf("%d\n", array[idx]);
		else
			printf("%d, ", array[idx]);
		idx++;
	}

	if (value == array[mid])
		return (mid);
	else if (value < array[mid])
		return (helper(array, left, mid - 1, value));
	else
		return (helper(array, mid + 1, right, value));
}

/**
 * binary_search - finds a value in an array binary
 * @array: array to search
 * @size: length of array
 * @value: input value to check for
 * Return: values or -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (helper(array, 0, size - 1, value));
}
