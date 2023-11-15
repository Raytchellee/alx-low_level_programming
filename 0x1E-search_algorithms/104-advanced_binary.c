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
	size_t mid;

	if (left > right)
		return (-1);

	printf("Searching in array: ");

	for (mid = left; mid < right; mid++)
		printf("%d, ", array[mid]);
	printf("%d\n", array[mid]);

	mid = left + (right - left) / 2;

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);

	if (array[mid] >= value)
		return (helper(array, left, mid, value));

	return (helper(array, mid + 1, right, value));
}

/**
 * advanced_binary - jump search array
 * @array: input array
 * @size: Array size
 * @value: value to find
 * Return: The first index  -1
 **/

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (helper(array, 0, size - 1, value));
}
