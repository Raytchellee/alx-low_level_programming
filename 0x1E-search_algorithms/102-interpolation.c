#include <stdio.h>
#include <math.h>

/**
 * interpolation_search - jump search array
 * @array: input array
 * @size: Array size
 * @value: value to find
 * Return: The first index  -1
 **/

int interpolation_search(int *array, size_t size, int value)
{
	size_t idx, a, b;

	if (!array)
		return (-1);

	for (a = 0, b = size - 1; b >= a;)
	{
		idx = a + (((double)(b - a) / (array[b] - array[a])) * (value - array[a]));
		if (idx < size)
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", idx);
			break;
		}

		if (array[idx] == value)
			return (idx);
		if (array[idx] > value)
			b = idx - 1;
		else
			a = idx + 1;
	}

	return (-1);
}
