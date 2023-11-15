/**
 * jump_list - jump search array
 * @list: input lisst
 * @size: Array size
 * @value: value to find
 * Return: The first index  -1
 **/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *curr, *idx;
	size_t skips = 0, gap;

	if (list == NULL || size == 0)
		return (NULL);

	gap = sqrt(size);

	for (curr = idx = list; idx->index + 1 < size && idx->n < value;)
	{
		curr = idx;
		for (skips += gap; idx->index < skips; idx = idx->next)
		{
			if (idx->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", idx->index, idx->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			curr->index, idx->index);

	for (; curr->index < idx->index && curr->n < value; curr = curr->next)
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
	printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);

	return (curr->n == value ? curr : NULL);
}
