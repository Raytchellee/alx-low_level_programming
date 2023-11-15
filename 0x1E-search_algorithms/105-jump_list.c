#include <math.h>
#include <stdio.h>

/**
 * jump_list - jump search array
 * @list: input lisst
 * @size: input size
 * @value: value to find
 * Return: The first index  -1
 **/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp;
	size_t idx = 0, idy = 0, idz;

	if (!list || size == 0)
		return (NULL);

	idz = (size_t)sqrt((double)size);
	do {
		temp = list;
		idy++;
		idx = idy * idz;

		while (list->next && list->index < idx)
			list = list->next;
		if (list->next == NULL && idx != list->index)
			idx = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);

	} while (idx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)temp->index, (int)list->index);
	for (; temp && temp->index <= list->index; temp = temp->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)temp->index, temp->n);
		if (temp->n == value)
			return (temp);
	}

	return (NULL);
}
