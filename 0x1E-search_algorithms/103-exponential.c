#include <stdio.h>
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
 * exponential_search - jump search array
 * @array: input array
 * @size: Array size
 * @value: value to find
 * Return: The first index  -1
 **/

int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 0, exp;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
		for (idx = 1; idx < size && array[idx] <= value; idx = idx * 2)
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	}

	exp = idx < size ? idx : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", idx / 2, exp);
	return (helper(array, idx / 2, exp, value));
}
