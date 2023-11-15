#include <stdio.h>
#include <math.h>

/**
 * jump_search - jump search array
 * @array: input array
 * @size: Array size
 * @value: value to find
 * Return: The first index  -1
 **/

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), prev = 0, curr = jump;

	while (curr < size && array[curr] < value)
	{
		prev = curr;
		curr += jump;
	}

	for (size_t idx = prev; idx < fmin(curr, size); idx++)
	{
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
