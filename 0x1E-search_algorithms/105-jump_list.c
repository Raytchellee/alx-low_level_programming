#include <stdio.h>
#include <math.h>

/**
 * jump_list - jump search array
 * @list: input lisst
 * @size: input size
 * @value: value to find
 * Return: The first index  -1
 **/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *curr;
	size_t idx, k, m;

	if (!list || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	idx = 0;
	k = 0;

	do {
		curr = list;
		k++;
		idx = k * m;

		while (list->next && list->index < idx)
			list = list->next;

		if (list->next == NULL && idx != list->index)
			idx = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);

	} while (idx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)curr->index, (int)list->index);

	for (; curr && curr->index <= list->index; curr = curr->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)curr->index, curr->n);
		if (curr->n == value)
			return (curr);
	}

	return (NULL);
}
