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
	size_t idx, temp, gap;

	if (array == NULL || size == 0)
		return (-1);

	gap = sqrt(size);
	for (idx = temp = 0; temp < size && array[temp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
		idx = temp;
		temp += gap;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", idx, temp);
	temp = temp < size - 1 ? temp : size - 1;
	for (; idx < temp && array[idx] < value; idx++)
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

	return (array[idx] == value ? (int)idx : -1);
}
